#include<stdio.h>
#include<stdlib.h>
struct fraccion {
    int den;
    int num;
}; 
struct fraccion suma(struct fraccion f1, struct fraccion f2) {
    struct fraccion resultado;
    resultado.num = (f1.num * f2.den) + (f2.num * f1.den);
    resultado.den = f1.den * f2.den;
    return resultado;
}
struct fraccion resta(struct fraccion f1, struct fraccion f2) {
    struct fraccion resultado;
    resultado.num = (f1.num * f2.den) - (f2.num * f1.den);
    resultado.den = f1.den * f2.den;
    return resultado;
}
struct fraccion multi(struct fraccion  f1, struct fraccion f2){
    struct fraccion resultado;
    resultado.num = f1.num * f2.num;
    resultado.den = f1.den * f2.den;
    return resultado;
};

struct fraccion division(struct fraccion f1, struct fraccion f2) {
    struct fraccion resultado;
    resultado.num = f1.num * f2.den;
    resultado.den = f1.den * f2.num;
    return resultado;
}
int main(void) {
    struct fraccion frac1;
    struct fraccion frac2;
    frac1.den = 3;
    frac1.num = 4;
    frac2.den = 6;
    frac2.num = 2;
    struct fraccion suma_resultado = suma(frac1, frac2);
    struct fraccion resta_resultado = resta(frac1, frac2);
    struct fraccion multi_resultado = multi(frac1,frac2);
    struct fraccion division_resultado = division(frac1, frac2);
    printf("Suma: %d/%d\n", suma_resultado.num, suma_resultado.den);
    printf("Resta: %d/%d\n", resta_resultado.num, resta_resultado.den);
    printf("Multiplicacion: %d/%d\n", multi_resultado.num, multi_resultado.den);
    printf("División: %d/%d\n", division_resultado.num, division_resultado.den);

    return 0;
}
