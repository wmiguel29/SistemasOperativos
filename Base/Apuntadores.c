#include <stdio.h>

void suma(int* num){
  *num +=20;

}

int main(){
    int arraynums[3] = {1,2,3};

    printf("El valor del primer elemento es: %d\n", arraynums[0]);

    suma(&arraynums[0]);

    printf("El valor del primer elemento es: %d", arraynums[0]);



    return 0;
}