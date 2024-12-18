//Arquivo para funções de conversão de volume
#ifndef VOLUME_H
#define VOLUME_H

// Conversões de Litros 
float litrosToMililitros(float l) {
    return l * 1000;
}

float litrosToMetrosCubicos(float l) {
    return l / 1000;
}

// Conversões de Mililitros
float mililitrosToLitros(float ml) {
    return ml / 1000;
}

float mililitrosToMetrosCubicos(float ml) {
    return ml / 1e6;
}

// Conversões de Metros Cúbicos
float metrosCubicosToLitros(float m3) {
    return m3 * 1000;
}

float metrosCubicosToMililitros(float m3) {
    return m3 * 1e6;
}

#endif