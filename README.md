# Programa de Conversão de Unidades

## Descrição
Este programa foi desenvolvido em linguagem C para realizar a conversão entre diferentes unidades de medida. Cada tipo de unidade possui um arquivo separado, o que torna o código modular e fácil de manter. O usuário pode escolher entre diversas opções de unidades, conforme a lista apresentada.

## Funcionalidades
O programa permite a conversão entre as seguintes unidades:

1. **Unidades de Comprimento**: metro, centímetro, milímetro.
2. **Unidades de Massa**: quilograma, grama, tonelada.
3. **Unidades de Volume**: litro, mililitro, metros cúbcicos.
4. **Unidades de Temperatura**: Celsius, Fahrenheit, Kelvin.
5. **Unidades de Velocidade**: km/h, m/s, mph.
6. **Potência**: Watts (W), quilowatts (kW), cavalos-vapor (cv ou hp).
7. **Unidades de Área**: metro quadrado, centímetro quadrado.
8. **Unidades de Tempo**: segundos, minutos, horas.
9. **Unidades de Dados**: bits, bytes, kilobytes (KB), megabytes (MB), gigabytes (GB), terabytes (TB).

## Estrutura do Projeto
O projeto está dividido em arquivos individuais para cada tipo de unidade:

    ├── libs
        │ ├── comprimento.c
        │ ├── massa.c
        │ ├── volume.c
        │ ├── temperatura.c
        │ ├── velocidade.c
        │ ├── eletricidade.c
        │ ├── area.c
        │ ├── tempo.c
        │ ├── armazenamento.c
        │ ├── IU.c
    └── main.c
    └── README.md

## Como Compilar
Para compilar o programa, utilize um compilador C, como `gcc`. Segue um exemplo:

```bash
gcc -o conversor main.c
```

## Como Executar
Após a compilação, execute o programa com o comando:

```bash
./conversor
```

O menu interativo será exibido, permitindo ao usuário selecionar o tipo de unidade para conversão.

## Exemplo de Uso
1. Escolha o tipo de unidade no menu principal (ex: 1 para comprimento).
2. Informe a conversão desejada (ex: 1 para Metros --> Centímetros)
3. Insira o valor a ser convertido.
4. O programa exibirá o resultado da conversão.

## Requisitos
- Compilador C (gcc ou equivalente).
- Sistema operacional compatível com programas C.

## Desenvlvedores
- [Lucas Luige](https://github.com/lluigecm)
- [Evelyn Suzarte](https://github.com/Evelynsuzarte)
- [Caio Natividade](https://github.com/CaioNatividade)
- [Luiz Marcelo](https://github.com/devluinix)
- [Thiago Ribeiro](https://github.com/devthiagoribeiro)
- [Mateus Coelho](https://github.com/mateuscoelhw)
- [Daniel Santos](https://github.com/DanielSantos08)
- [Luan](https://github.com/naulcs)
- [Maria Vitória](https://github.com/MaryVickk)
- [Joel Santos](https://github.com/JoelSantos-JS)
