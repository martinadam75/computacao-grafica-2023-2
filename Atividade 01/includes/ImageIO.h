/**
 * @file ImageProcessor.h
 * @author Martin Henrique Viana Adam
 * @brief Uma classe para criação de imagens em formato PNG com funcionalidades de gradiente, círculos e quadrados.
 */

#ifndef IMAGE_PROCESSOR_H
#define IMAGE_PROCESSOR_H

#include <vector>

class ImageProcessor {
private:
    int width; ///< Largura da imagem em pixels.
    int height; ///< Altura da imagem em pixels.
    std::vector<unsigned char> imageData; ///< Vetor de pixels da imagem.

    /**
     * @brief Preenche o plano de fundo da imagem com uma cor RGBA.
     * @param red Componente vermelho (0-255).
     * @param green Componente verde (0-255).
     * @param blue Componente azul (0-255).
     * @param alpha Componente alfa (0-255) para transparência.
     */
    void fillBackground(unsigned char red, unsigned char green, unsigned char blue, unsigned char alpha);

public:
    /**
     * @brief Construtor padrão da classe ImageProcessor.
     * @param width Largura da imagem em pixels.
     * @param height Altura da imagem em pixels.
     */
    ImageProcessor(int width, int height);

    /**
     * @brief Construtor da classe ImageProcessor.
     * @param width Largura da imagem em pixels.
     * @param height Altura da imagem em pixels.
     * @param imageData Vetor com os pixels da imagem.
     */
    ImageProcessor(int width, int height, const std::vector<unsigned char>& imageData);

    /**
     * @brief Salva a imagem em formato PNG.
     * @param filename Nome do arquivo PNG de saída.
     */
    void savePNG(const char *filename);

    /**
     * @brief Gera um gradiente na imagem.
     */
    void makeGradient();

    /**
     * @brief Cria um círculo na imagem com a cor especificada.
     * @param centerX Coordenada x do centro do círculo.
     * @param centerY Coordenada y do centro do círculo.
     * @param radius Raio do círculo.
     * @param red Componente vermelho (0-255) da cor.
     * @param green Componente verde (0-255) da cor.
     * @param blue Componente azul (0-255) da cor.
     */
    void makeCircle(int centerX, int centerY, int radius, unsigned char red, unsigned char green, unsigned char blue);

    /**
     * @brief Cria um quadrado na imagem com a cor especificada.
     * @param x Coordenada x do canto superior esquerdo do quadrado.
     * @param y Coordenada y do canto superior esquerdo do quadrado.
     * @param size Tamanho do quadrado (largura e altura).
     * @param red Componente vermelho (0-255) da cor.
     * @param green Componente verde (0-255) da cor.
     * @param blue Componente azul (0-255) da cor.
     */
    void makeSquare(int x, int y, int size, unsigned char red, unsigned char green, unsigned char blue);
};

#endif
