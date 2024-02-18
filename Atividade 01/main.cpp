/**
 * @file main.cpp
 * @brief Demonstração do uso da classe ImageProcessor para gerar imagens com gradientes, círculos e quadrados.
 * @author Martin Henrique Viana Adam
 */

#include <iostream>
#include "includes/ImageProcessor.h"

int main() {
    // Inicialização de uma instância de ImageProcessor com dimensões 256x256
    ImageProcessor imageProcessor(256, 256);

    // Gerar um gradiente na imagem
    imageProcessor.makeGradient();

    // Desenhar um círculo vermelho (r=255, g=0, b=0) com raio 100 e centro (128, 128)
    imageProcessor.makeCircle(128, 128, 100, 255, 0, 0);

    // Desenhar um quadrado vermelho (r=255, g=0, b=0) com coordenadas (100, 100) e tamanho 50x50
    imageProcessor.makeSquare(100, 100, 50, 255, 0, 0);

    return 0;
}
