#include <stdio.h>
#define  PI 3.14

float a;
float b;
float h;

float Wylicz_objetosc_prostopadloscianu(float a, float b, float h) {
    return a * b * h;
}


void select_Objetosci_Prostopadloscianu() {
    printf("Podaj_dlugosci_prostopadloscianu\n");
    printf("a: ");
    scanf("%f", &a);
    printf("b: ");
    scanf("%f", &b);
    printf("h: ");
    scanf("%f", &h);
    printf("\n Objetosc_Prostopadloscianu_wynosi %f \n ", Wylicz_objetosc_prostopadloscianu(a, b, h));
}
float r;
float h;
float Wylicz_Objetosci_walca(float r, float h){
    return PI * r * r * h;
}
void select_Objetosci_Walca(){
printf("Podaj wysokosc walca\t");
scanf("%f", &h);
printf("Podaj promien kola\t");
scanf("%f", &r);
printf("Pole kola wynosi:\t%f\n", Wylicz_Objetosci_walca(r, h));
return;
}

void menu(){
    int wybor;
    printf("prostopadloscian czy walec\n1. prostopadloscian\n2. walec\n");
    scanf("%d", &wybor);
    switch(wybor){
    case 1:
       select_Objetosci_Prostopadloscianu();
       break;
    case 2:
        select_Objetosci_Walca();
        break;
    default:
        printf("Wybierz dobra liczbe!\n");
        menu();
        break;
    }
}

int main() {
   menu();
    return 0;
}
