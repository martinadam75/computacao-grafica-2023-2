# Atividade 03

Nesta atividade, desenvolvemos a classe `ObjLoader` em C++ para processar arquivos no formato Wavefront OBJ. Essa classe é essencial para carregar modelos 3D a partir de arquivos `.obj`, permitindo o acesso fácil aos vértices, coordenadas de textura, normais e faces para manipulação.

## Recursos Implementados:

- **Carregamento de Arquivos OBJ:** A classe pode carregar arquivos no formato OBJ, extrair informações sobre vértices, texturas, normais e faces, facilitando a manipulação de modelos 3D.

- **Acesso Simples aos Dados:** Fornece métodos getters para acessar facilmente os dados carregados, tornando simples a manipulação dos modelos 3D carregados.

- **Suporte a Testes Unitários:** Implementamos testes unitários utilizando o Google Test (gtest) para garantir o correto funcionamento da classe `ObjLoader`.

## Exemplo de Uso:

1. Compile o programa principal juntamente com os arquivos da atividade e da classe `ObjLoader`.
   
   ```bash
   $ g++ -o output main.cpp includes/*.cpp -Wall
   ```
2. Execute o programa compilado.
    ```
    $ ./output
    ```

**Testes Unitários:**

1. Compile o programa principal juntamente com os arquivos da atividade e da classe `ObjLoader`.
    Os testes unitários são uma parte importante do desenvolvimento de software. Garantem que as classes e funções estejam funcionando conforme o esperado. Para executar os testes unitários da classe ObjLoader, siga estas etapas:

    ```bash
    $ g++ -std=c++14 run_tests.cpp tests/*.cpp includes/*.cpp -lgtest -lgtest_main -pthread -o run_tests
    $ ./run_tests
    ```

2. Execute o arquivo executável dos testes.

    ```bash
    $ g++ -std=c++14 run_tests.cpp tests/*.cpp includes/*.cpp -lgtest -lgtest_main -pthread -o run_tests
    $ ./run_tests
    ```