#include<stdio.h>
#include<stdlib.h>
int main(){
    float horas,precio_hora,salario;
    printf("Ingrese el numero de horas trabajadas en la semana");
    scanf("%f",& horas);
    printf("Ingrese el precio por hora");
    scanf("%f",&precio_hora);
     
     if (horas<=40){
        salario=horas*precio_hora;
     }else{
        salario=40*precio_hora+(horas-40)*precio_hora*1.5;
     }
printf("El salario semanal del empleado es :$%.2f\n",salario);
return 0;
}