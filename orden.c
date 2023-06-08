#include <stdio.h>
#include <stdbool.h>

int main (){
    int w =9;
    int x =3;
    int y =7;
    int z= 2;

    bool enunciado_1 = x < y && w > z;
     bool enunciado_2 = x >= w ^ z == y;
      bool enunciado_3 = y <= x != w;
       bool enunciado_4 = w == 9 ^ x ==3;
        bool enunciado_5 = y > z&& z < x;
         bool enunciado_6=!(w!=9);

         printf("\a");
         printf("enunciado _1 es %s\n", enunciado_1?"verdadero":"falso");
         printf("enunciado _2 es %s\n", enunciado_2?"verdadero":"falso");
         printf("enunciado _3 es %s\n", enunciado_3?"verdadero":"falso");
         printf("enunciado _4 es %s\n", enunciado_4?"verdadero":"falso");
         printf("enunciado _5 es %s\n", enunciado_5?"verdadero":"falso");
         printf("enunciado _6 es %s\n", enunciado_6?"verdadero":"falso");
         return 0;
}