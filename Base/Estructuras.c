#include <stdio.h>

struct alumno{
    char nombre[20];
    int edad;
    float promedio;
};

alumno1 = {"Juan", 20, 8.5};
alumno2 = {"Maria", 19, 9.5};

int main(){
    printf("Nombre: %s \n", alumno1.nombre);
    printf("Edad: %d \n", alumno1.edad);
    printf("Promedio: %f \n", alumno1.promedio);

    return 0;

}