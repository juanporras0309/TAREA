#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_DEGREE 100 // máximo grado del polinomio
#define MAX_POLYNOMIALS 100 // máximo número de polinomios

int main() {
    int num_polynomials, max_degree, i, j, k;
    double coefficients[MAX_DEGREE][MAX_POLYNOMIALS] = {0}; // matriz de coeficientes
    double result[MAX_DEGREE] = {0}; // resultado final

    // Leer el número de polinomios y el mayor grado aceptado
    printf("Ingrese el número de polinomios: ");
    scanf("%d", &num_polynomials);
    printf("Ingrese el máximo grado aceptado: ");
    scanf("%d", &max_degree);

    // Leer los coeficientes de cada polinomio
    printf("\nMatriz de coeficientes:\n");
    for(i = 0; i < num_polynomials; i++) {
        printf("Polinomio %d:\n", i+1);
        for(j = 0; j <= max_degree; j++) {
            printf("Ingrese el coeficiente de grado %d del polinomio %d: ", j, i+1);
            scanf("%lf", &coefficients[j][i]);
        }
    }

    // Mostrar la matriz de coeficientes
    for(i = 0; i <= max_degree; i++) {
        for(j = 0; j < num_polynomials; j++) {
            printf("%.2lf ", coefficients[i][j]);
        }
        printf("\n");
    }

    // Sumar los polinomios
    printf("\nResultado final:\n");
    for(i = 0; i <= max_degree; i++) {
        for(j = 0; j < num_polynomials; j++) {
            result[i] += coefficients[i][j];
        }
        if(result[i] != 0) {
            printf("%.2lf x^%d ", result[i], i);
        }
    }

    return 0;
  
    // Leer el número de polinomios y el mayor grado aceptado
    printf("Ingrese el número de polinomios: ");
    scanf("%d", &num_polynomials);
    printf("Ingrese el máximo grado aceptado: ");
    scanf("%d", &max_degree);

    // Leer los coeficientes de cada polinomio
    printf("\nMatriz de coeficientes:\n");
    for(i = 0; i < num_polynomials; i++) {
        printf("Polinomio %d:\n", i+1);
        for(j = 0; j <= max_degree; j++) {
            printf("Ingrese el coeficiente de grado %d del polinomio %d: ", j, i+1);
            scanf("%lf", &coefficients[j][i]);
        }
    }

    // Mostrar la matriz de coeficientes
    for(i = 0; i <= max_degree; i++) {
        for(j = 0; j < num_polynomials; j++) {
            printf("%.2lf ", coefficients[i][j]);
        }
        printf("\n");
    }

    return 0;
}
