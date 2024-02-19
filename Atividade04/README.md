# Atividade 04

## Descrição

Este projeto tem como objetivo a implementação de uma técnica de renderização chamada traçado de raios (ray tracing), com base nos princípios apresentados nos tutoriais "Ray Tracing in One Weekend" e "Ray Tracing: The Next Week". O foco está na visualização de uma esfera e de um triângulo, integrando conceitos desenvolvidos nas Atividades 1 e 2. Além disso, incorpora a implementação da Atividade 3, permitindo visualizar um objeto complexo lido a partir de um arquivo.

## Funcionalidades Principais

1. **Esfera e Triângulo:** Implementação da visualização de esferas e triângulos utilizando técnicas de traçado de raios.
   
2. **Classes de Manipulação de Vetores:** Utilização das classes desenvolvidas nas Atividades 1 e 2 para manipulação eficiente de vetores.
   
3. **Leitura de Objeto a partir de Arquivo:** Implementação da leitura de objetos a partir de arquivos no formato .obj, permitindo a visualização de modelos 3D mais complexos.

## Exemplo de Uso

### Adicionar Lib para Salvar em PNG
```bash
$ git clone https://github.com/lvandeve/lodepng.git
```

### Compilar e Executar o Código 

As imagens serão salvas na pasta `/outputs`
```bash
$ g++ -o output main.cpp
$ ./output
```