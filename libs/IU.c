#include <stdio.h>
#include <stdlib.h>
#include "comprimento.c"
#include "massa.c"
#include "volume.c"
#include "temperatura.c"
#include "velocidade.c"
#include "eletricidade.c"
#include "area.c"
#include "tempo.c"
#include "armazenamento.c"

void menu();
void chooseOp(int op);
void menuComprimento();
void chooseComp(int op);
void menuMassa();
void chooseMassa(int op);
void menuVolume();
void chooseVolume(int op);
void menuTemperatura();
void chooseTemp(int op);
void menuVelocidade();
void chooseVel(int op);
void menuEletricidade();
void menuArea();
void chooseArea(int op);
void menuTempo();
void chooseTempo(int op);
void menuArmazenamento();
void chooseArmazenamento(int op);



void menu(){
    int op = -1;
    while (op > 9 || op < 0)
    {
        system("cls");
        printf("\n--------------------- MENU ---------------------\n");
        printf("Digite o numero correspondente a opcao desejada: \n");
        printf("0 - Sair\n");
        printf("1 - Comprimento\n");
        printf("2 - Massa\n");
        printf("3 - Volume\n");
        printf("4 - Temperatura\n");
        printf("5 - Velocidade\n");
        printf("6 - Eletricidade\n");
        printf("7 - Area\n");
        printf("8 - Tempo\n");
        printf("9 - Armazenamento\n");
        printf("Opcao: ");
        scanf("%d", &op);
    }
    
    return chooseOp(op);
}

void chooseOp(int op){
    system("cls"); 
    switch (op)
    {
        case 1:
            menuComprimento();
            break;
        case 2:
            menuMassa();
            break;
        case 3:
            menuVolume();
            break;
        case 4:
            menuTemperatura();
            break;
        case 5:
            menuVelocidade();
            break;
        case 6:
            menuEletricidade();
            break;
        case 7:
            menuArea();
            break;
        case 8:
            menuTempo();
            break;
        case 9:
            menuArmazenamento();
            break;
        default:
            return;
    }   
}

void menuComprimento(){
    int op = -1;

    while(op > 6 || op < 0){
        printf("\n--------------------- MENU COMPRIMENTO ---------------------\n");
        printf("Digite o numero correspondente a opcao desejada: \n");
        printf("0 - Voltar ao Menu Inicial\n");
        printf("1 - Metros --> Centimetros\n");
        printf("2 - Metros --> Milimetros\n");
        printf("3 - Centimetros --> Metros\n");
        printf("4 - Centimetros --> Milimetros\n");
        printf("5 - Milimetros --> Metros\n");
        printf("6 - Milimetros --> Centimetros\n");
        printf("Opcao: ");
        scanf("%d", &op);
    }

    if (op == 0)
        return menu();

    return chooseComp(op);
}

void chooseComp(int op){
    float valor;
    system("cls");
    switch (op)
    {
        case 1:
            printf("Digite o valor em metros: ");
            scanf("%f", &valor);
            printf("\n\t\t%.2f metros equivalem a %.2f centimetros\n", valor, metros_centimetros(valor));
            return menuComprimento();
        case 2:
            printf("Digite o valor em metros: ");
            scanf("%f", &valor);
            printf("\n\t\t%.2f metros equivalem a %.2f milimetros\n", valor, metros_milimetros(valor));
            return menuComprimento();
        case 3:
            printf("Digite o valor em centimetros: ");
            scanf("%f", &valor);
            printf("\n\t\t%.2f centimetros equivalem a %.2f metros\n", valor, centimetros_metros(valor));
            return menuComprimento();
        case 4:
            printf("Digite o valor em centimetros: ");
            scanf("%f", &valor);
            printf("\n\t\t%.2f centimetros equivalem a %.2f milimetros\n", valor, centimetros_milimetros(valor));
            return menuComprimento();
        case 5:
            printf("Digite o valor em milimetros: ");
            scanf("%f", &valor);
            printf("\n\t\t%.2f milimetros equivalem a %.2f metros\n", valor, milimetros_metros(valor));
            return menuComprimento();
        case 6:
            printf("Digite o valor em milimetros: ");
            scanf("%f", &valor);
            printf("\n\t\t%.2f milimetros equivalem a %.2f centimetros\n", valor, milimetros_centimetros(valor));
            return menuComprimento();
        default:
            return menu();
    }
}

void menuMassa(){
    int op = -1;

    while(op > 8 || op < 0){
        printf("\n--------------------- MENU MASSA ---------------------\n");
        printf("Digite o numero correspondente a opcao desejada: \n");
        printf("0 - Voltar ao Menu Inicial\n");
        printf("1 - Gramas --> Quilogramas\n");
        printf("2 - Gramas --> Miligramas\n");
        printf("3 - Gramas --> Hectogramas\n");
        printf("4 - Gramas --> Decagramas\n");
        printf("5 - Quilogramas --> Gramas\n");
        printf("6 - Quilogramas --> Miligramas\n");
        printf("7 - Hectogramas --> Gramas\n");
        printf("8 - Decagramas --> Gramas\n");
        printf("Opcao: ");
        scanf("%d", &op);
    }

    if (op == 0)
        return menu();

    return chooseMassa(op);
}

void chooseMassa(int op){
    float valor;
    system("cls");
    switch (op)
    {
        case 1:
            printf("Digite o valor em gramas: ");
            scanf("%f", &valor);
            printf("\n\t\t%.2f gramas equivalem a %.2f quilogramas\n", valor, gToKg(valor));
            return menuMassa();
        case 2:
            printf("Digite o valor em gramas: ");
            scanf("%f", &valor);
            printf("\n\t\t%.2f gramas equivalem a %.2f miligramas\n", valor, gToMg(valor));
            return menuMassa();
        case 3:
            printf("Digite o valor em gramas: ");
            scanf("%f", &valor);
            printf("\n\t\t%.2f gramas equivalem a %.2f hectogramas\n", valor, gToHg(valor));
            return menuMassa();
            system("cls");
            printf("Digite o valor em gramas: ");
            scanf("%f", &valor);
            printf("\n\t\t%.2f gramas equivalem a %.2f decagramas\n", valor, gToDag(valor));
            return menuMassa();
        case 5:
            printf("Digite o valor em quilogramas: ");
            scanf("%f", &valor);
            printf("\n\t\t%.2f quilogramas equivalem a %.2f gramas\n", valor, kgToG(valor));
            return menuMassa();
        case 6:
            printf("Digite o valor em quilogramas: ");
            scanf("%f", &valor);
            printf("\n\t\t%.2f quilogramas equivalem a %.2f miligramas\n", valor, kgToMg(valor));
            return menuMassa();
        case 7:
            printf("Digite o valor em hectogramas: ");
            scanf("%f", &valor);
            printf("\n\t\t%.2f hectogramas equivalem a %.2f gramas\n", valor, hgToG(valor));
            return menuMassa();
        case 8:
            printf("Digite o valor em decagramas: ");
            scanf("%f", &valor);
            printf("\n\t\t%.2f decagramas equivalem a %.2f gramas\n", valor, dagToG(valor));
            return menuMassa();
        default:
            return menu();
    }
}

void menuVolume(){
    int op = -1;

    while(op > 6 || op < 0){
        printf("\n--------------------- MENU VOLUME ---------------------\n");
        printf("Digite o numero correspondente a opcao desejada: \n");
        printf("0 - Voltar ao Menu Inicial\n");
        printf("1 - Litros --> Mililitros\n");
        printf("2 - Litros --> Metros Cubicos\n");
        printf("3 - Mililitros --> Litros\n");
        printf("4 - Mililitros --> Metros Cubicos\n");
        printf("5 - Metros Cubicos --> Litros\n");
        printf("6 - Metros Cubicos --> Mililitros\n");
        printf("Opcao: ");
        scanf("%d", &op);
    }

    if (op == 0)
        return menu();

    return chooseVolume(op);
}

void chooseVolume(int op){
    float valor;
    system("cls");
    switch (op)
    {
        case 1:
            printf("Digite o valor em litros: ");
            scanf("%f", &valor);
            printf("\n\t\t%.2f litros equivalem a %.2f mililitros\n", valor, litrosToMililitros(valor));
            return menuVolume();
        case 2:
            printf("Digite o valor em litros: ");
            scanf("%f", &valor);
            printf("\n\t\t%.2f litros equivalem a %.2f metros cubicos\n", valor, litrosToMetrosCubicos(valor));
            return menuVolume();
        case 3:
            printf("Digite o valor em mililitros: ");
            scanf("%f", &valor);
            printf("\n\t\t%.2f mililitros equivalem a %.2f litros\n", valor, mililitrosToLitros(valor));
            return menuVolume();
        case 4:
            printf("Digite o valor em mililitros: ");
            scanf("%f", &valor);
            printf("\n\t\t%.2f mililitros equivalem a %.2f metros cubicos\n", valor, mililitrosToMetrosCubicos(valor));
            return menuVolume();
        case 5:
            printf("Digite o valor em metros cubicos: ");
            scanf("%f", &valor);
            printf("\n\t\t%.2f metros cubicos equivalem a %.2f litros\n", valor, metrosCubicosToLitros(valor));
            return menuVolume();
        case 6:
            printf("Digite o valor em metros cubicos: ");
            scanf("%f", &valor);
            printf("\n\t\t%.2f metros cubicos equivalem a %.2f mililitros\n", valor, metrosCubicosToMililitros(valor));
            return menuVolume();
        default:
            return menu();
    }
}

void menuTemperatura(){
    int op = -1;

    while(op > 5 || op < 0){
        printf("\n--------------------- MENU TEMPERATURA ---------------------\n");
        printf("Digite o numero correspondente a opcao desejada: \n");
        printf("0 - Voltar ao Menu Inicial\n");
        printf("1 - Celsius --> Fahrenheit\n");
        printf("2 - Celsius --> Kelvin\n");
        printf("3 - Fahrenheit --> Celsius\n");
        printf("4 - Fahrenheit --> Kelvin\n");
        printf("5 - Kelvin --> Celsius\n");
        printf("6 - Kelvin --> Fahrenheit\n");
        printf("Opcao: ");
        scanf("%d", &op);
    }

    if (op == 0)
        return menu();

    return chooseTemp(op);
}

void chooseTemp(int op){
    float valor;
    system("cls");
    switch (op)
    {
        case 1:
            printf("Digite o valor em Celsius: ");
            scanf("%f", &valor);
            printf("\n\t\t%.2f Celsius equivalem a %.2f Fahrenheit\n", valor, celsiusParaFahrenheit(valor));
            return menuTemperatura();
        case 2:
            printf("Digite o valor em Celsius: ");
            scanf("%f", &valor);
            printf("\n\t\t%.2f Celsius equivalem a %.2f Kelvin\n", valor, celsiusParaKelvin(valor));
            return menuTemperatura();
        case 3:
            printf("Digite o valor em Fahrenheit: ");
            scanf("%f", &valor);
            printf("\n\t\t%.2f Fahrenheit equivalem a %.2f Celsius\n", valor, fahrenheitParaCelsius(valor));
            return menuTemperatura();
        case 4:
            printf("Digite o valor em Fahrenheit: ");
            scanf("%f", &valor);
            printf("\n\t\t%.2f Fahrenheit equivalem a %.2f Kelvin\n", valor, fahrenheitParaKelvin(valor));
            return menuTemperatura();
        case 5:
            printf("Digite o valor em Kelvin: ");
            scanf("%f", &valor);
            printf("\n\t\t%.2f Kelvin equivalem a %.2f Celsius\n", valor, kelvinParaCelsius(valor));
            return menuTemperatura();
        case 6:
            printf("Digite o valor em Kelvin: ");
            scanf("%f", &valor);
            printf("\n\t\t%.2f Kelvin equivalem a %.2f Fahrenheit\n", valor, kelvinParaFahrenheit(valor));
            return menuTemperatura();
        default:
            return menu();
    }
}

void menuVelocidade(){
    int op = -1;

    while(op > 6 || op < 0){
        printf("\n--------------------- MENU VELOCIDADE ---------------------\n");
        printf("Digite o numero correspondente a opcao desejada: \n");
        printf("0 - Voltar ao Menu Inicial\n");
        printf("1 - Km/h --> m/s\n");
        printf("2 - Km/h --> mph\n");
        printf("3 - m/s --> Km/h\n");
        printf("4 - m/s --> mph\n");
        printf("5 - mph --> Km/h\n");
        printf("6 - mph --> m/s\n");
        printf("Opcao: ");
        scanf("%d", &op);
    }

    if (op == 0)
        return menu();

    return chooseVel(op);
}

void chooseVel(int op){
    float valor;
    system("cls");
    switch (op)
    {
        case 1:
            printf("Digite o valor em Km/h: ");
            scanf("%f", &valor);
            printf("\n\t\t%.2f Km/h equivalem a %.2f m/s\n", valor, kmhToMs(valor));
            return menuVelocidade();
        case 2:
            printf("Digite o valor em Km/h: ");
            scanf("%f", &valor);
            printf("\n\t\t%.2f Km/h equivalem a %.2f mph\n", valor, kmhToMph(valor));
            return menuVelocidade();
        case 3:
            printf("Digite o valor em m/s: ");
            scanf("%f", &valor);
            printf("\n\t\t%.2f m/s equivalem a %.2f Km/h\n", valor, msToKmh(valor));
            return menuVelocidade();
        case 4:
            printf("Digite o valor em m/s: ");
            scanf("%f", &valor);
            printf("\n\t\t%.2f m/s equivalem a %.2f mph\n", valor, msToMph(valor));
            return menuVelocidade();
        case 5:
            printf("Digite o valor em mph: ");
            scanf("%f", &valor);
            printf("\n\t\t%.2f mph equivalem a %.2f Km/h\n", valor, mphToKmh(valor));
            return menuVelocidade();
        case 6:
            printf("Digite o valor em mph: ");
            scanf("%f", &valor);
            printf("\n\t\t%.2f mph equivalem a %.2f m/s\n", valor, mphToMs(valor));
            return menuVelocidade();
        default:
            return menu();
    }
}

void menuEletricidade(){
    int op = -1;

    while(op > 6 || op < 0){
        printf("\n--------------------- MENU ELETRICIDADE ---------------------\n");
        printf("Digite o numero correspondente a opcao desejada: \n");
        printf("0 - Voltar ao Menu Inicial\n");
        printf("1 - Watts --> Kilowatts\n");
        printf("2 - Kilowatts --> Watts\n");
        printf("3 - Kilowatts --> Cavalos\n");
        printf("4 - Cavalos --> Kilowatts\n");
        printf("5 - Watts --> Cavalos\n");
        printf("6 - Cavalos --> Watts\n");
        printf("Opcao: ");
        scanf("%d", &op);
    }

    if (op == 0)
        return menu();

    return chooseEletricidade(op);
}

void chooseEletricidade(int op){
    float valor;
    system("cls");
    switch (op)
    {
        case 1:
            printf("Digite o valor em Watts: ");
            scanf("%f", &valor);
            printf("\n\t\t%.2f Watts equivalem a %.2f Kilowatts\n", valor, watts_para_kw(valor));
            return menuEletricidade();
        case 2:
            printf("Digite o valor em Kilowatts: ");
            scanf("%f", &valor);
            printf("\n\t\t%.2f Kilowatts equivalem a %.2f Watts\n", valor, kw_para_watts(valor));
            return menuEletricidade();
        case 3:
            printf("Digite o valor em Kilowatts: ");
            scanf("%f", &valor);
            printf("\n\t\t%.2f Kilowatts equivalem a %.2f Cavalos\n", valor, kw_para_cv(valor));
            return menuEletricidade();
        case 4:
            printf("Digite o valor em Cavalos: ");
            scanf("%f", &valor);
            printf("\n\t\t%.2f Cavalos equivalem a %.2f Kilowatts\n", valor, cv_para_kw(valor));
            return menuEletricidade();
        case 5:
            printf("Digite o valor em Watts: ");
            scanf("%f", &valor);
            printf("\n\t\t%.2f Watts equivalem a %.2f Cavalos\n", valor, watts_para_cv(valor));
            return menuEletricidade();
        case 6:
            printf("Digite o valor em Cavalos: ");
            scanf("%f", &valor);
            printf("\n\t\t%.2f Cavalos equivalem a %.2f Watts\n", valor, cv_para_watts(valor));
            return menuEletricidade();
        default:
            return menu();
    }
}

void menuArea(){
    int op = -1;

    while(op > 6 || op < 0){
        printf("\n--------------------- MENU AREA ---------------------\n");
        printf("Digite o numero correspondente a opcao desejada: \n");
        printf("0 - Voltar ao Menu Inicial\n");
        printf("1 - m² --> cm²\n");
        printf("2 - m² --> km²\n");
        printf("3 - cm² --> m²\n");
        printf("4 - cm² --> mm²\n");
        printf("5 - km² --> m²\n");
        printf("6 - mm² --> cm²\n");
        printf("Opcao: ");
        scanf("%d", &op);
    }

    if (op == 0)
        return menu();

    return chooseArea(op);
}

void chooseArea(int op){
    float valor;
    system("cls");
    switch (op)
    {
        case 1:
            printf("Digite o valor em m²: ");
            scanf("%f", &valor);
            printf("\n\t\t%.2f m² equivalem a %.2f cm²\n", valor, metrosQuadradosToCentimetrosQuadrados(valor));
            return menuArea();
        case 2:
            printf("Digite o valor em m²: ");
            scanf("%f", &valor);
            printf("\n\t\t%.2f m² equivalem a %.2f km²\n", valor, metrosQuadradosToKilometrosQuadrados(valor));
            return menuArea();
        case 3:
            printf("Digite o valor em cm²: ");
            scanf("%f", &valor);
            printf("\n\t\t%.2f cm² equivalem a %.2f m²\n", valor, centimetrosQuadradosToMetrosQuadrados(valor));
            return menuArea();
        case 4:
            printf("Digite o valor em cm²: ");
            scanf("%f", &valor);
            printf("\n\t\t%.2f cm² equivalem a %.2f mm²\n", valor, centimetrosQuadradosToMilimetrosQuadrados(valor));
            return menuArea();
        case 5:
            printf("Digite o valor em km²: ");
            scanf("%f", &valor);
            printf("\n\t\t%.2f km² equivalem a %.2f m²\n", valor, kilometrosQuadradosToMetrosQuadrados(valor));
            return menuArea();
        case 6:
            printf("Digite o valor em mm²: ");
            scanf("%f", &valor);
            printf("\n\t\t%.2f mm² equivalem a %.2f cm²\n", valor, milimetrosQuadradosToCentimetrosQuadrados(valor));
            return menuArea();
        default:
            return menu();
    }
}

void menuTempo(){
    int op = -1;

    while(op > 6 || op < 0){
        printf("\n--------------------- MENU TEMPO ---------------------\n");
        printf("Digite o numero correspondente a opcao desejada: \n");
        printf("0 - Voltar ao Menu Inicial\n");
        printf("1 - Segundos --> Minutos\n");
        printf("2 - Segundos --> Horas\n");
        printf("3 - Minutos --> Segundos\n");
        printf("4 - Minutos --> Horas\n");
        printf("5 - Horas --> Segundos\n");
        printf("6 - Horas --> Minutos\n");
        printf("Opcao: ");
        scanf("%d", &op);
    }

    if (op == 0)
        return menu();

    return chooseTempo(op);
}

void chooseTempo(int op){
    float valor;
    system("cls");
    switch (op)
    {
        case 1:
            printf("Digite o valor em segundos: ");
            scanf("%f", &valor);
            printf("\n\t\t%.2f segundos equivalem a %.2f minutos\n", valor, segundosParaMinutos(valor));
            return menuTempo();
        case 2:
            printf("Digite o valor em segundos: ");
            scanf("%f", &valor);
            printf("\n\t\t%.2f segundos equivalem a %.2f horas\n", valor, segundosParaHoras(valor));
            return menuTempo();
        case 3:
            printf("Digite o valor em minutos: ");
            scanf("%f", &valor);
            printf("\n\t\t%.2f minutos equivalem a %.2f segundos\n", valor, minutosParaSegundos(valor));
            return menuTempo();
        case 4:
            printf("Digite o valor em minutos: ");
            scanf("%f", &valor);
            printf("\n\t\t%.2f minutos equivalem a %.2f horas\n", valor, minutosParaHoras(valor));
            return menuTempo();
        case 5:
            printf("Digite o valor em horas: ");
            scanf("%f", &valor);
            printf("\n\t\t%.2f horas equivalem a %.2f segundos\n", valor, horasParaSegundos(valor));
            return menuTempo();
        case 6:
            printf("Digite o valor em horas: ");
            scanf("%f", &valor);
            printf("\n\t\t%.2f horas equivalem a %.2f minutos\n", valor, horasParaMinutos(valor));
            return menuTempo();
        default:
            return menu();
    }
}

void menuArmazenamento(){
    int op = -1;

    while(op > 10 || op < 0){
        printf("\n--------------------- MENU ARMAZENAMENTO ---------------------\n");
        printf("Digite o numero correspondente a opcao desejada: \n");
        printf("0 - Voltar ao Menu Inicial\n");
        printf("1 - Bits --> Bytes\n");
        printf("2 - Bytes --> Bits\n");
        printf("3 - Bytes --> Kilobytes\n");
        printf("4 - Kilobytes --> Bytes\n");
        printf("5 - Kilobytes --> Megabytes\n");
        printf("6 - Megabytes --> Kilobytes\n");
        printf("7 - Megabytes --> Gigabytes\n");
        printf("8 - Gigabytes --> Megabytes\n");
        printf("9 - Gigabytes --> Terabytes\n");
        printf("10 - Terabytes --> Gigabytes\n");
        printf("Opcao: ");
        scanf("%d", &op);
    }

    if (op == 0)
        return menu();

    return chooseArmazenamento(op);
}

void chooseArmazenamento(int op){
    float valor;
    system("cls");
    switch (op)
    {
        case 1:
            printf("Digite o valor em bits: ");
            scanf("%f", &valor);
            printf("\n\t\t%.2f bits equivalem a %.2f bytes\n", valor, bitsToBytes(valor));
            return menuArmazenamento();
        case 2:
            printf("Digite o valor em bytes: ");
            scanf("%f", &valor);
            printf("\n\t\t%.2f bytes equivalem a %.2f bits\n", valor, bytesToBits(valor));
            return menuArmazenamento();
        case 3:
            printf("Digite o valor em bytes: ");
            scanf("%f", &valor);
            printf("\n\t\t%.2f bytes equivalem a %.2f kilobytes\n", valor, bytesToKB(valor));
            return menuArmazenamento();
        case 4:
            printf("Digite o valor em kilobytes: ");
            scanf("%f", &valor);
            printf("\n\t\t%.2f kilobytes equivalem a %.2f bytes\n", valor, kbToBytes(valor));
            return menuArmazenamento();
        case 5:
            printf("Digite o valor em kilobytes: ");
            scanf("%f", &valor);
            printf("\n\t\t%.2f kilobytes equivalem a %.2f megabytes\n", valor, kbToMB(valor));
            return menuArmazenamento();
        case 6:
            printf("Digite o valor em megabytes: ");
            scanf("%f", &valor);
            printf("\n\t\t%.2f megabytes equivalem a %.2f kilobytes\n", valor, mbToKB(valor));
            return menuArmazenamento();
        case 7:
            printf("Digite o valor em megabytes: ");
            scanf("%f", &valor);
            printf("\n\t\t%.2f megabytes equivalem a %.2f gigabytes\n", valor, mbToGB(valor));
            return menuArmazenamento();
        case 8:
            printf("Digite o valor em gigabytes: ");
            scanf("%f", &valor);
            printf("\n\t\t%.2f gigabytes equivalem a %.2f megabytes\n", valor, gbToMB(valor));
            return menuArmazenamento();
        case 9:
            printf("Digite o valor em gigabytes: ");
            scanf("%f", &valor);
            printf("\n\t\t%.2f gigabytes equivalem a %.2f terabytes\n", valor, gbToTB(valor));
            return menuArmazenamento();
        case 10:
            printf("Digite o valor em terabytes: ");
            scanf("%f", &valor);
            printf("\n\t\t%.2f terabytes equivalem a %.2f gigabytes\n", valor, tbToGB(valor));
            return menuArmazenamento();
        default:
            return menu();
    }
}