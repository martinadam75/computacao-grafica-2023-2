/**
 * @file ImageProcessor.cpp
 * @brief Implementação da classe ImageProcessor para gerar imagens em formato PNG com funcionalidades de gradiente, círculos e quadrados.
 * @author Martin Henrique Viana Adam
 */

#include "../../lodepng/lodepng.h"
#include "../../lodepng/lodepng.cpp"
#include <iostream>

#include "ImageProcessor.h"

// Constructor definition
ImageProcessor::ImageProcessor(int width, int height) {
    this->width = width;
    this->height = height;
    // Create a vector to store the image pixels (RGBA)
    this->imageData = std::vector<unsigned char>(width * height * 4);
}

ImageProcessor::ImageProcessor(int width, int height, const std::vector<unsigned char>& imageData) {
    this->width = width;
    this->height = height;
    // Create a vector to store the image pixels (RGBA)
    this->imageData = imageData;
}

// Member function to save PNG
void ImageProcessor::savePNG(const char *filename) {
    // Save the image in PNG format using lodepng
    if (lodepng::encode(filename, this->imageData, this->width, this->height) == 0) {
        std::cout << "Imagem PNG criada com sucesso: " << filename << std::endl;
    } else {
        std::cerr << "Erro ao criar imagem PNG." << std::endl;
    }
}

// Member function to fill background
void ImageProcessor::fillBackground(unsigned char red, unsigned char green, unsigned char blue, unsigned char alpha) {
    // Fill the image with the specified color
    for (int j = 0; j < this->height; ++j) {
        for (int i = 0; i < this->width; ++i) {
            // Calculate the pixel index in the RGBA image
            size_t index = (i + j * this->width) * 4;

            // Fill the background with the specified color
            this->imageData[index] = red;     // Red component
            this->imageData[index + 1] = green; // Green component
            this->imageData[index + 2] = blue; // Blue component
            this->imageData[index + 3] = alpha; // Alpha (transparency)
        }
    }
}

// Member function to create gradient
void ImageProcessor::makeGradient() {
    // Fill the image with the gradient
    for (int j = 0; j < this->height; ++j) {
        for (int i = 0; i < this->width; ++i) {
            unsigned char red = static_cast<unsigned char>(255.999 * double(i) / (this->width - 1));
            unsigned char green = static_cast<unsigned char>(255.999 * double(j) / (this->height - 1));
            unsigned char blue = static_cast<unsigned char>(0);
            unsigned char alpha = static_cast<unsigned char>(255); // Alpha (transparency) = 255 (opaque)

            // Calculate the pixel index in the RGBA image
            size_t index = (i + j * this->width) * 4;

            // Fill the color values in the image data vector
            this->imageData[index] = red;
            this->imageData[index + 1] = green;
            this->imageData[index + 2] = blue;
            this->imageData[index + 3] = alpha;
        }
    }

    savePNG("outputs/gradient.png");
}

// Member function to create a filled circle
void ImageProcessor::makeCircle(int centerX, int centerY, int radius, unsigned char red, unsigned char green, unsigned char blue) {
    // Ensure that the radius is non-negative
    if (radius < 0) {
        std::cerr << "Raio inválido para o círculo." << std::endl;
        return;
    }

    // Fill the background with black
    fillBackground(0, 0, 0, 255);

    for (int j = 0; j < this->height; ++j) {
        for (int i = 0; i < this->width; ++i) {
            int dx = i - centerX;
            int dy = j - centerY;

            // Check if the pixel (i, j) is inside the circle
            if (dx * dx + dy * dy <= radius * radius) {
                // Calculate the pixel index in the RGBA image
                size_t index = (i + j * this->width) * 4;

                // Fill the circle with the specified color
                this->imageData[index] = red;       // Red component
                this->imageData[index + 1] = green;   // Green component
                this->imageData[index + 2] = blue;   // Blue component
                this->imageData[index + 3] = 255; // Fully opaque
            }
        }
    }

    // Save the modified image
    savePNG("outputs/circle.png");
}

// Member function to create a filled square
void ImageProcessor::makeSquare(int x, int y, int size, unsigned char red, unsigned char green, unsigned char blue) {
    // Ensure that the size is non-negative
    if (size < 0) {
        std::cerr << "Tamanho inválido para o quadrado." << std::endl;
        return;
    }

    // Calculate the coordinates of the square's top-left and bottom-right corners
    int x1 = x;
    int y1 = y;
    int x2 = x + size;
    int y2 = y + size;

    // Fill the background with black
    fillBackground(0, 0, 0, 255);

    // Draw the colored square on the black background
    for (int j = y1; j < y2; ++j) {
        for (int i = x1; i < x2; ++i) {
            // Check if the pixel (i, j) is inside the square
            if (i >= 0 && i < this->width && j >= 0 && j < this->height) {
                // Calculate the pixel index in the RGBA image
                size_t index = (i + j * this->width) * 4;

                // Fill the square with the specified color
                this->imageData[index] = red;       // Red component
                this->imageData[index + 1] = green;   // Green component
                this->imageData[index + 2] = blue;   // Blue component
                this->imageData[index + 3] = 255; // Fully opaque
            }
        }
    }

    // Save the modified image
    savePNG("outputs/square.png");
}
