//
// Created by Jesus on 28/05/2023.
//
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float media(int n, float *x) {
    float sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += x[i];
    }
    return sum / n;
}

float varianza(int n, float *x) {
    float m = media(n, x);
    float sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += pow(x[i] - m, 2);
    }
    return sum / n;
}

int main() {
    int n;
    printf("Ingrese el tamaño de la lista: ");
    scanf("%d", &n);
    float *x = malloc(n * sizeof(float));
    for (int i = 0; i < n; ++i) {
        printf("Ingrese el elemento %d: ", i + 1);
        scanf("%f", &x[i]);
    }
    printf("Media: %f\n", media(n, x));
    printf("Varianza: %f\n", varianza(n, x));
    free(x);
}
