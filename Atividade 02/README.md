# Atividade 02

Este projeto é uma biblioteca abrangente para operações vetoriais e matriciais, especialmente desenvolvida para aplicações gráficas 2D e 3D. Inclui a implementação das classes Vec2, Vec3, Vec4, Mat2, Mat3 e Mat4, cada uma representando vetores e matrizes de suas respectivas dimensões.

A biblioteca oferece uma variedade de operações aritméticas para essas estruturas matemáticas, como adição, subtração e multiplicação. Além disso, inclui operações mais avançadas, como produto escalar e produto vetorial para vetores, e transformações de matriz.

O código é escrito em C++, seguindo os padrões e práticas de codificação modernos. Foi desenvolvido para ser facilmente integrado em outros projetos, fornecendo uma base sólida para qualquer aplicação gráfica ou de desenvolvimento de jogos que necessite de operações vetoriais e matriciais.

## Instalação no Windows

### Passo 1: Configuração do Ambiente

1. **Baixe o Google Test:**
   - Faça o download do Google Test em [Google Test Releases](https://github.com/google/googletest/releases) (selecione o arquivo zip da versão mais recente).

2. **Extraia o Arquivo:**
   - Extraia o conteúdo do arquivo zip baixado para uma pasta de sua escolha.

3. **Configuração do Ambiente:**
   - Adicione o diretório `googletest\include` ao caminho de inclusão de cabeçalhos do seu compilador.

### Passo 2: Compilação e Execução dos Testes

1. **Configuração do Projeto:**
   - Adicione o arquivo de origem do Google Test (`gtest_main.cc`) ao seu projeto.

2. **Compile os Testes:**
   - Utilize o seu compilador C++ para compilar os testes. Por exemplo, usando o g++ no terminal do Windows:
     ```bash
     g++ -std=c++14 main.cpp tests/*.cpp includes/*.cpp gtest\src\gtest_main.cc -lgtest -lgtest_main -pthread -o output
     ```

3. **Execute os Testes:**
   - Após a compilação bem-sucedida, execute o arquivo de saída gerado:
     ```bash
     output.exe
     ```

4. **Verifique os Resultados:**
   - Os resultados dos testes serão exibidos no console.