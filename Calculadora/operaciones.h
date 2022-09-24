#include <stdio.h>
#include <stdlib.h>
int num1, num2, resultado;

void array_print(int *array, int size);

int suma(int *p1, int *p2)
{
    int sum;
    sum = *p1 + *p2;
    return sum;
}

int resta(int *p1, int *p2)
{
    int resta;
    resta = *p1 - *p2;
    return resta;
}

int multiplicacion(int *p1, int *p2)
{
    int multiplicacion;
    multiplicacion = (*p1) * (*p2);
    return multiplicacion;
}

float division(float *p1, float *p2)
{
    float division;
    division = ((*p1) / (*p2));
    return division;
}

int modulo(int *p1, int *p2)
{
    int modulo;
    modulo = (*p1) % (*p2);
    return modulo;
}

int potencia(int *p1, int *p2)
{
    int potencia;
    potencia = (*p1) ^ (*p2);
    return potencia;
}

float raiz(float *p1)
{
    float temp, sqrt;
    sqrt = *p1 / 2;
    temp = 0;
    while (sqrt != temp)
    {
        temp = sqrt;
        sqrt = (*p1 / temp + temp) / 2;
    }
    return sqrt;
}

float descuento(float *p1, float *p2)
{
    float descuento;
    descuento = (((*p1) * (*p2)) / 100);
    return descuento;
}

double area(double *p1, double *p2)
{
    double area;
    area = ((*p1) * (*p2));
    return area;
}
// {
//     double area;
//     int resultadoArea = multiplicacion(&num1, &num2);
//     return resultadoArea;
// }
double perimetro(double *p1, double *p2)
{
    //Para rectangulo
    double perimetro;
    perimetro = ((*p1) + (*p2)) * 2;
    return perimetro;
}

float longitud(float *p1)
{
    float longitud;
    longitud = 2 * 3.1416 * (*p1);
    return longitud;
}

int sumaLista(int *p1)
{
    int resultado = 0;
    int *v1;
    int x = *p1;
    v1 = malloc((x) * sizeof(int));
    for (int i = 0; i < x; i++)
    {
        printf("digite el numero %i: ", i + 1);
        scanf("%i", &v1[i]);
        resultado = resultado + v1[i];
    }
    return resultado;
}

void romanos(int number){
    int num[] = {1,4,5,9,10,40,50,90,100,400,500,900,1000};
    char sym[] = {'I','IV','V','IX','X','XL','L','XC','C','CD','D','CM','M'};

    int i = 12;

    printf("El numero %i en romano es: ", number);

    while(number>=0){
        int div = (int)(number/num[i]);
        
        number = number%num[i];

        while(div >= 0){
            printf("%s",sym[i]);
            div--;
        }
        i--;
    }
}

// int * pascal(int number){
//     int *pascal;
//     pascal =(int*)malloc((number) * sizeof(int));

//     if(pascal == NULL){
//         printf("No se pudo reservar memoria");
//         exit(1);
//     }else{
//         int i, j;
//         for (i = 0; i < number; i++)
//         {
//             for (j = 0; j <= i; j++)
//             {
//                 if (j == 0 || j == i)
//                 {
//                     pascal[j] = 1;
//                 }
//                 else
//                 {
//                     pascal[j] = pascal[j - 1] + pascal[j];
//                 }
//                 //printf("%i ", pascal[j]);
//             } 
//         }

//         return pascal;
//         free(pascal);
//     }

// }

void pascal(int number){
    int **pascal = (int**)malloc(number* sizeof(int*));

    int i = 0;
    int j = 0;

    if(pascal == NULL){
        printf("No se pudo reservar memoria");
        exit(1);
    }

    for (int i = 1; i < number; i++)
    {
        pascal[i] = (int*)malloc((i+1) * sizeof(int));

        for(j = 0; j <= i; j++){
            if(j == 0 || j == i){
                pascal[i][j] = 1;
            }else{
                pascal[i][j] = pascal[i-1][j-1] + pascal[i-1][j];
            }
        }
    }

    print_array(pascal[number-1], number);

    for (int i = 1; i < number; i++)
    {
        free(pascal[i]);
    }

    free(pascal);

    //return pascal[number-1];
}

void print_array(int *array, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%i ", array[i]);
    }
}


void matrixSum() {
    int m, n;
    printf("Numero de filas =>");
    scanf("%d", &m);
    printf("Numero de columnas =>");
    scanf("%d", &n);
    int** A = (int**)malloc(m * sizeof(int*));
    int** B = (int**)malloc(m * sizeof(int*));
    printf("\nIngrese matriz A:\n");
    for (int i = 0; i < m; ++i) {
        *(A + i) = (int*)malloc(n * sizeof(int));
        for (int j = 0; j < n; ++j) {
           printf("[%d %d] =>", i + 1, j + 1);
           scanf("%d", *(A + i) + j);
        }
    }
    printf("\nIngrese matriz B:\n");
    for (int i = 0; i < m; ++i) {
        *(B + i) = (int*)malloc(n * sizeof(int));
        for (int j = 0; j < n; ++j) {
            printf("[%d %d] =>", i + 1, j + 1);
            scanf("%d", *(B + i) + j);
        }
    }
    printf("\nA + B:");
    for (int i = 0; i < m; ++i) {
        printf("\n");
        for (int j = 0; j < n; ++j)
            printf("%d ", *(*(A + i) + j) + *(*(B + i) + j));
        free(*(A + i));
        free(*(B + i));
    }
    free(A);
    free(B);
}

