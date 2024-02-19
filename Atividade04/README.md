# Atividade 04

## Descrição

Neste projeto, implementamos uma técnica de renderização chamada traçado de raios (ray tracing), seguindo os princípios dos tutoriais "Ray Tracing in One Weekend" e "Ray Tracing: The Next Week". Nosso objetivo é visualizar uma esfera e um triângulo, incorporando conceitos das Atividades 1, 2 e 3.

## Funcionalidades Principais

1. **Visualização de Esfera e Triângulo:** Implementamos a visualização de esferas e triângulos utilizando técnicas avançadas de traçado de raios.

2. **Manipulação Eficiente de Vetores:** Utilizamos classes desenvolvidas nas Atividades 1 e 2 para manipular vetores de forma eficiente.

3. **Leitura de Objeto a partir de Arquivo:** Implementamos a leitura de objetos a partir de arquivos no formato .obj, permitindo a visualização de modelos 3D mais complexos.

## Exemplo de Uso

### Adicionar Biblioteca para Salvamento em PNG
```bash
$ git clone https://github.com/lvandeve/lodepng.git
```

### Compilação e Execução do Código

As imagens renderizadas serão salvas na pasta `/outputs`

```bash
$ g++ -o output main.cpp
$ ./output
```

Este é um exemplo simples de como compilar e executar o código para visualizar a cena renderizada.