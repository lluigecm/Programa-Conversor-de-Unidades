#ifndef MASSA_H
#define MASSA_H

// Conversões de Gramas (g)
float gToKg(float u) {
    return u / 1000;  // gramas para quilogramas
}
float gToMg(float u) {
    return u * 1000;  // gramas para miligramas
}
float gToHg(float u) {
    return u / 100;   // gramas para hectogramas
}
float gToDag(float u) {
    return u / 10;    // gramas para decagramas
}

// Conversões de Quilogramas (kg)
float kgToG(float u) {
    return u * 1000;  // quilogramas para gramas
}
float kgToMg(float u) {
    return u * 1000000;  // quilogramas para miligramas
}

// Conversões de Hectogramas (Hg)
float hgToG(float u) {
    return u * 100;   // hectogramas para gramas
}

// Conversões de Decagramas (Dag)
float dagToG(float u) {
    return u * 10;    // decagramas para gramas
}

// Conversões de Miligramas (Mg)
float mgToG(float u) {
    return u / 1000;  // miligramas para gramas
}
float mgToKg(float u) {
    return u / 1000000;  // miligramas para quilogramas
}

#endif