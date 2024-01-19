#include <stdio.h>

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
    printf("Objetosc_Prostopadloscianu_wynosi %f", Wylicz_objetosc_prostopadloscianu(a, b, h));
}


int main() {
    select_Objetosci_Prostopadloscianu();

    return 0;
}
