#include <stdio.h>

int main(){
  int num1;

  scanf("%i", &num1);

  printf("%p", &num1);	

  (num1%2 == 0) ? printf("Par") : printf("Impar");

  return 0;
}