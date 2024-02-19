/**
 * @file main.cpp
 * @brief Demonstração do uso da classe ObjLoader para carregar arquivos no formato OBJ.
 * @author Martin Henrique Viana Adam
 */

#include <iostream>
#include <vector>
#include "includes/ObjLoader.h"

int main() {
    // Instância da classe ObjLoader para carregar o arquivo OBJ
    ObjLoader objLoader;

    // Carrega o arquivo OBJ
    objLoader.LoadObj("/caminho/do/arquivo/indoor_plant.obj");

    // Imprime os vértices
    for (size_t i = 0; i < objLoader.vertices.size(); ++i) {
        Vertex vertex = objLoader.GetVertices(i);
        std::cout << "Vértice " << i << ": " << vertex.x << " " << vertex.y << " " << vertex.z << std::endl;
    }

    // Imprime as coordenadas de textura
    std::vector<TextureCoord> textureCoords = objLoader.GetTextureCoords();
    for (size_t i = 0; i < textureCoords.size(); ++i) {
        TextureCoord textureCoord = textureCoords[i];
        std::cout << "Coordenada de Textura " << i << ": " << textureCoord.u << " " << textureCoord.v << std::endl;
    }

    // Imprime as normais
    for (size_t i = 0; i < objLoader.normals.size(); ++i) {
        Normal normal = objLoader.GetNormals(i);
        std::cout << "Normal " << i << ": " << normal.nx << " " << normal.ny << " " << normal.nz << std::endl;
    }

    // Imprime as faces
    for (size_t i = 0; i < objLoader.faces.size(); ++i) {
        for (size_t j = 0; j < objLoader.faces[i].size(); ++j) {
            Face face = objLoader.GetFaces(i, j);
            std::cout << "Face " << i << ", Vértice " << j << ": " << face.v1 << " " << face.v2 << " " << face.v3 << std::endl;
        }
    }

    return 0;
}
