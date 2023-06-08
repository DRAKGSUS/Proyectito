# include <stdio.h>
 int main(){
 int num;

 printf("Introduce un numero entero :");

 scanf("%d",&num);

 printf("escalinata al derecho:\n");
 for (int i=1; i<= num; i++){
    for(int j=1; j<= i; j++){
        printf("*");
    }
 
 
 }
 }
