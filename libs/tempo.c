//Arquivo para funções de conversão de tempo

// Funções de conversão de tempo
float segundosParaMinutos(float segundos)
{
    return segundos / 60.0;  // 1 minuto = 60 segundos
}

float segundosParaHoras(float segundos)
{
    return segundos / 3600.0;  // 1 hora = 3600 segundos
}

float minutosParaSegundos(float minutos)
{
    return minutos * 60.0;  // 1 minuto = 60 segundos
}

float minutosParaHoras(float minutos)
{
    return minutos / 60.0;  // 1 hora = 60 minutos
}

float horasParaSegundos(float horas)
{
    return horas * 3600.0;  // 1 hora = 3600 segundos
}

float horasParaMinutos(float horas)
{
    return horas * 60.0;  // 1 hora = 60 minutos
}
