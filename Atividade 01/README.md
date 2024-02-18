# Atividade 01

Este projeto é uma aplicação em C++ que gera imagens no formato PNG. Ele oferece funcionalidades para criar imagens com gradientes suaves, desenhar círculos e quadrados coloridos em um plano de fundo personalizável. As imagens resultantes são úteis para diversas aplicações gráficas e podem ser facilmente integradas em projetos maiores.

Ao executar o programa, as imagens geradas serão salvas na pasta *outputs*.

## Instalação no Windows

### Passos para instalação das bibliotecas no Windows
1. Baixe e instale o [Xming](https://sourceforge.net/projects/xming/), que é uma alternativa ao XQuartz para sistemas Windows.

2. Clone o repositório da biblioteca LodePNG:
   ```powershell
   $ git clone https://github.com/lvandeve/lodepng.git

## Rodar o programa

### Passos para rodar o programa

1. Compile o programa utilizando o seguinte comando:
    ```$ g++ -o output main.cpp includes/ImageIO.cpp -I../lodepng ../lodepng/lodepng.cpp -Wall

2. Execute o programa:
    ```$ ./output


