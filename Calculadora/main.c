#include <stdio.h>
#include "operaciones.h"

int main()
{
    int num1, num2, resultado;
    int caso;
    int salir = 1;
    while (salir != 0)
    {
        printf("Bienvenido a la calculadora, seleccione una opcion:\n 1. Suma\n 2. Resta\n 3. Multiplicacion\n 4. Division\n 5. descuento\n 6. modulo\n 7. potencia\n 8. raiz\n 9. area\n 10.perimetro\n 11.longitud\n 12.romanos\n 13.suma lista\n 14.Pascal\n 15.Suma de Matriz\n ");
        scanf("%i", &caso);

        switch (caso)
        {
        case 1:
            // Suma
            printf("digite los numero a sumar:  ");
            scanf("%i %i", &num1, &num2);
            int resultadosuma = suma(&num1, &num2);
            printf("el resultado es: %i", resultadosuma);
            break;
        case 2:
            // Resta
            printf("digite los numero a restar: ");
            scanf("%i %i", &num1, &num2);
            int resultadoresta = resta(&num1, &num2);
            printf("el resultado es: %i", resultadoresta);
            break;
        case 3:
            // Multiplicacion
            printf("digite los numero a multiplicar: ");
            scanf("%i %i", &num1, &num2);
            int resultadoMult = multiplicacion(&num1, &num2);
            printf("el resultado es: %i", resultadoMult);
            break;
        case 4:
            // Division
            printf("digite los numero a dividir: ");
            scanf("%f %f", &num1, &num2);
            float resultadorDiv = division(&num1, &num2);
            printf("el resultado es: %.2f", resultadorDiv);
            break;
        case 5:
            // descuento
            printf("digite el precio y el porcentaje de descuento: ");
            scanf("%f %f", &num1, &num2);
            float resultadoDesc = descuento(&num1, &num2);
            printf("el resultado es: %.2f", resultadoDesc);
            break;

        case 6:
            // modulo
            printf("digite los numero a dividir: ");
            scanf("%i %i", &num1, &num2);
            int resultadoMod = modulo(&num1, &num2);
            printf("el resultado es: %i", resultadoMod);
            break;
        case 7:
            // potencia
            printf("digite el numero y la potencia: ");
            scanf("%i %i", &num1, &num2);
            int resultadoPot = potencia(&num1, &num2);
            printf("el resultado es: %i", resultadoPot);
            break;

        case 8:
            // raiz
            printf("digite el numero: ");
            scanf("%f", &num1);
            float resultadoRaiz = raiz(&num1);
            printf("el resultado es: %.2f", resultadoRaiz);
            break;

        case 9:
            // area
            printf("digite la base y la altura: ");
            scanf("%d %d", &num1, &num2);
            double resultadoArea = area(&num1, &num2);
            printf("el resultado es: %d", resultadoArea);
            break;
        case 10:
            // perimetro
            printf("digite la base y la altura: ");
            scanf("%d %d", &num1, &num2);
            double resultadoPerimetro = perimetro(&num1, &num2);
            printf("el resultado es: %d", resultadoPerimetro);
            break;
        case 11:
            // longitud
            printf("digite el radio: ");
            scanf("%f", &num1);
            float resultadoLong = longitud(&num1);
            printf("el resultado es: %.2f", resultadoLong);
            break;
        case 12:
            // romanos
            printf("digite el numero: ");
            scanf("%d", &num1);
            printf("el resultado es:");
            romanos(num1);
            break;
            

        case 13:
            // suma lista
            printf("digite el numero de elementos: ");
            scanf("%i", &num1);
            int resultadoSumaLista = sumaLista(num1);
            printf("el resultado es: %i", resultadoSumaLista);
            break;
        case 14:
            // Pascal
            printf("digite el numero de fila: ");
            scanf("%i", &num1);
            //int * resultadoPascal = pascal(num1);
            printf("el resultado es:");
            pascal(num1);
            //print_array(resultadoPascal, num1);
            break;
        case 15:
            // matrixSum
            matrixSum();
            break;
        default:
            printf("opcion no valida");
            break;
        }
        printf("\n");
        printf("Desea salir? 0.si  1.no  ");
        scanf("%i", &salir);
        printf("\n");
    }
    return 0;
}
