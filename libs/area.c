//m² --> cm²
float metrosQuadradosToCentimetrosQuadrados(float m2) {
    return m2 * 10000; 
}

//m² --> km²
float metrosQuadradosToKilometrosQuadrados(float m2) {
    return m2 / 1e6; 
}

//cm² --> m²
float centimetrosQuadradosToMetrosQuadrados(float cm2) {
    return cm2 / 10000; 
}

//cm² --> mm²
float centimetrosQuadradosToMilimetrosQuadrados(float cm2) {
    return cm2 * 100;
}

//km² --> m²
float kilometrosQuadradosToMetrosQuadrados(float km2) {
    return km2 * 1e6; 
}

//mm² --> cm²
float milimetrosQuadradosToCentimetrosQuadrados(float mm2) {
    return mm2 / 100; 
}