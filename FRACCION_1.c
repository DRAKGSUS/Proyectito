#include <stdio.h>
#include <stdlib.h>

int main(){
    double a = 5 ;
    double b = 2;
    double c = 1;
    double d = 4;
    double z;
    
    z=(a+(b/(c/(c+(b/(b-(c/d)))))));
    printf("el resultado es %f \n",z);
    system("Pause");
     
     return 0;
}