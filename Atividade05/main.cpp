/**
 * @file main.cpp
 * @author Martin Henrique Viana Adam
 * @brief Programa principal, onde é feita a visualização da cena com dois tipos de câmeras.
 */

#include "./includes/utils.h"
#include "./includes/camera.h"
#include "./includes/color.h"
#include "./includes/hittable_list.h"
#include "./includes/material.h"
#include "./includes/sphere.h"
#include "./includes/triangle.h"
#include "../Atividade03/includes/ObjLoader.h"
#include "../Atividade03/includes/ObjLoader.cpp"

#include <vector>

int main() {
    hittable_list world;

    std::cout << "Criando o chão..." << std::endl;
    auto ground_material = make_shared<lambertian>(color(0.5, 0.5, 0.5));
    world.add(make_shared<sphere>(point3(0,-1000,0), 1000, ground_material));

    ObjLoader obj;
    obj.LoadObj("/Users/renanoliveira/Desktop/ufscar/2023-02/computacao-grafica/atividades-projeto/Atividade05/cube.obj");
    auto cube_material = make_shared<lambertian>(color(0.9, 0.1, 0.3));

    std::cout << "Processando as faces do cubo..." << std::endl;
    std::vector<triangle> triangles_list = obj.get_triangle_faces(cube_material);
    for (int i = 0; i < triangles_list.size(); i++) {
        // ajuste de coordenadas do cubo (arquivo obj) de forma a melhor posicioná-lo na cena:
        for (int j = 0; j < 3; ++j) {
            triangles_list[i].vertices[j].coord += point3(0, 1, 0);
        }
        world.add(make_shared<triangle>(triangles_list[i]));
    }

    auto material1 = make_shared<lambertian>(color(0.4, 0.2, 0.1));
    world.add(make_shared<sphere>(point3(0, 1, 0), 1.0, material1));

    auto material2 = make_shared<lambertian>(color(1, 0.7, 0.5));
    world.add(make_shared<sphere>(point3(-4, 1, 0), 1.0, material2));

    camera cam1;
    configure_camera(cam1, 16.0 / 9.0, 500, 30, point3(0, 5, 20), point3(0, 0, 0), vec3(0, 1, 0), 0.6, 10.0);

    std::cout << "Rendering cam1..." << std::endl;
    cam1.render(world, "outputs/cam1.png");

    camera cam2;
    configure_camera(cam2, 16.0 / 9.0, 500, 30, point3(0, 4, 14), point3(0, 0, 0), vec3(0, 1, 0), 0.6, 10.0);

    std::cout << "Rendering cam2..." << std::endl;
    cam2.render(world, "outputs/cam2.png");
}
