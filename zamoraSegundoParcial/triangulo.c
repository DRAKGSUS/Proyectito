#include <stdio.h>
#include <math.h>

float Area(float a, float b, float c);

int main() {
    float a, b, c, area;

    printf("Ingrese la longitud de los tres lados del triángulo:\n");
    scanf("%f",&a);

    area = Area(a, b, c);

    printf("El área del triángulo es: %.2f\n", area);

    return 0;
}

float Area(float a, float b, float c) {
    float s = (a + b + c) / 2;
    float area = s * (s - a) * (s - b) * (s - c);
    area=sqrt(area);
    return area;
}