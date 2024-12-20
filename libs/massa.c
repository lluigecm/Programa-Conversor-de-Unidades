#ifndef MASSA_H
#define MASSA_H

// Conversões de Gramas
float gToDag(float u){
    return u / 10;
};    
float gToHg(float u){
    return u / 100;
};    
float gToKg(float u){
    return u / 1000;
};    
float gToDg(float u){
    return u * 10;
};     
float gToCg(float u){
    return u * 100;
};     
float gToMg(float u){
    return u * 1000;
}; 

// Conversões de Quilogramas
float kgToHg(float u){
    return u * 10;
};    
float kgToDag(float u){
    return u * 100;
};    
float kgToG(float u){
    return u * 1000;
};    
float kgToDg(float u){
    return u * 10000;
};     
float kgToCg(float u){
    return u * 100000;
};     
float kgToMg(float u){
    return u * 1000000;
}; 

// Conversões de Hectogramas (Hg)
float hgToG(float u) {
    return u * 100; 
};
float hgToKg(float u) {
    return u / 10; 
};
float hgToDag(float u) {
    return u * 10; 
};
float hgToDg(float u) {
    return u * 1000; 
};
float hgToCg(float u) {
    return u * 10000;
};
float hgToMg(float u) {
    return u * 100000;
};

// Conversões de Decagramas (Dag)
float dagToG(float u) {
    return u * 10;
};
float dagToKg(float u) {
    return u / 100;
};
float dagToHg(float u) {
    return u / 10;
};
float dagToDg(float u) {
    return u * 100;
};
float dagToCg(float u) {
    return u * 1000;
};
float dagToMg(float u) {
    return u * 10000;
};

// Conversões de Decigramas (Dg)
float dgToG(float u) {
    return u / 10;
};
float dgToKg(float u) {
    return u / 10000;
};
float dgToHg(float u) {
    return u / 1000;
};
float dgToDag(float u) {
    return u / 100;
};
float dgToCg(float u) {
    return u * 10;
};
float dgToMg(float u) {
    return u * 100;
};

// Conversões de Centigramas (Cg)
float cgToG(float u) {
    return u / 100;
};
float cgToKg(float u) {
    return u / 100000;
};
float cgToHg(float u) {
    return u / 10000;
};
float cgToDag(float u) {
    return u / 1000;
};
float cgToDg(float u) {
    return u / 10;
};
float cgToMg(float u) {
    return u * 10;
};

// Conversões de Miligramas (Mg)
float mgToG(float u) {
    return u / 1000;
};
float mgToKg(float u) {
    return u / 1000000;
};
float mgToHg(float u) {
    return u / 100000;
};
float mgToDag(float u) {
    return u / 10000;
};
float mgToDg(float u) {
    return u / 100;
};
float mgToCg(float u) {
    return u / 10;
};

#endif
