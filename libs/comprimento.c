//Arquivo para funções de conversão de comprimento
#include <stdio.h>

//metros para centimetros
float metros_centimetros (float metros){
    return metros * 100;
}

//metros para milimetros
float metros_milimetros (float metros){
    return metros * 1000;
}

// centimentros para metros
float centimetros_metros (float centimetros){
    return centimetros/100;
}

// centimentros para milimetros
float centimetros_milimetros (float centimetros){
    return centimetros*10;
}

//milimetros para metros
float milimetros_metros (float milimetros){
    return milimetros/1000;
}

//milimetros para centimetros
float milimetros_centimetros (float milimetros){
    return milimetros/10;
}