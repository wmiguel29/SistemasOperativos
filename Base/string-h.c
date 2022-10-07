#include <stdio.h>
#include <string.h>

int main(){
  
  char nombre[20] = "juan", copia[20], apellido[20] = "perez", concatenacion[41] = "", nombre2[20]= "jose";

  char entrada[20];	

  //strcpy(&copia, nombre);



  // strcat(concatenacion, nombre);
  // strcat(concatenacion,"-");
  // strcat(concatenacion, apellido);

  // printf("Nombre: %s", concatenacion);

  // if (strcmp(nombre,nombre2) == 0)
  // {
  //   printf("Son iguales");
  // }
  // else
  // {
  //   printf("Son diferentes");
  // }

  printf("Escriba el nombre: ");

  fflush(stdin);

  scanf("%s", &entrada);
  printf("Letras: %i", strlen(entrada));
  
  

  return 0;


}