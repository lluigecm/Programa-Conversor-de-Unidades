// Arquivo para funções de conversão de velocidade
#ifndef VELOCIDADE_H
#define VELOCIDADE_H

// Conversões de Quilômetros por Hora para Metros por Segundo
float kmhToMs(float u)
{
    return u * 0.277778;
}

// Conversões de Quilômetros por Hora para Milhas por Hora
float kmhToMph(float u)
{
    return u * 0.621371;
}

// Conversões de Metros por Segundo para Quilômetros por Hora
float msToKmh(float u)
{
    return u * 3.6;
}

// Conversões de Metros por Segundo para Milhas por Hora
float msToMph(float u)
{
    return u * 2.23694;
}

// Conversões de Milhas por Hora para Quilômetros por Hora
float mphToKmh(float u)
{
    return u * 1.60934;
}

// Conversões de Milhas por Hora para Metros por Segundo
float mphToMs(float u)
{
    return u * 0.44704;
}

#endif
