/**
 * @file ObjLoader.h
 * @brief Classe para carregamento de arquivos no formato OBJ.
 * @author Martin Henrique Viana Adam
 */
#ifndef OBJLOADER_H
#define OBJLOADER_H

#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>

#include "../../Atividade05/includes/Triangle.h"
#include "../../Atividade05/includes/Material.h"

/**
 * @brief Estrutura para representar um vértice.
 */
struct Vertex {
    float x, y, z;
};

/**
 * @brief Estrutura para representar uma coordenada de textura.
 */
struct TextureCoord {
    float u, v;
};

/**
 * @brief Estrutura para representar uma normal.
 */
struct Normal {
    float nx, ny, nz;
};

/**
 * @brief Estrutura para representar uma face.
 */
struct Face {
    int v1, v2, v3;
};

/**
 * @brief Classe para carregamento de arquivos no formato OBJ.
 */
class ObjLoader {
public:
    std::vector<Vertex> vertices; ///< Vetor de vértices.
    std::vector<TextureCoord> textureCoords; ///< Vetor de coordenadas de textura.
    std::vector<Normal> normals; ///< Vetor de normais.
    std::vector<std::vector<Face>> faces; ///< Vetor de faces.

    /**
     * @brief Obtém os vértices carregados.
     * @param idx Índice do vértice.
     * @return Estrutura representando o vértice.
     */
    Vertex GetVertices(const int idx) const;

    /**
     * @brief Obtém as coordenadas de textura carregadas.
     * @return Vetor de coordenadas de textura.
     */
    std::vector<TextureCoord> GetTextureCoords() const;

    /**
     * @brief Obtém as normais carregadas.
     * @param idx Índice da normal.
     * @return Estrutura representando a normal.
     */
    Normal GetNormals(const int idx) const;

    /**
     * @brief Obtém as faces carregadas.
     * @param i Índice da face.
     * @param j Índice do vértice da face.
     * @return Estrutura representando a face.
     */
    Face GetFaces(const int i, const int j) const;

    /**
     * @brief Carrega um arquivo OBJ.
     * @param filename Nome do arquivo OBJ.
     */
    void LoadObj(const std::string& filename);

    /**
     * @brief Obtém as faces do objeto como triângulos.
     * @param mat Material para os triângulos.
     * @return Vetor de triângulos.
     */
    std::vector<Triangle> GetTriangleFaces(std::shared_ptr<Material> mat);
};

#endif 
