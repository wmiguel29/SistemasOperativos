#include <stdlib.h>

int solution(int A[], int N) {
    // write your code in C99 (gcc 6.2.0)

    int i;
    unsigned long long int total = 0;
    unsigned long long int aux = 0;

    for(i=0; i<N; i++)
    {
        aux += A[i];
    }

    total = (N+1)*(N+2)/2;
    unsigned long long int resta = total - aux;
    return  resta;
}

int solution(int A[], int N) {
    int *b= (int*)calloc(N + 2, sizeof(int));
    for(size_t i = 0; i < N; i++)
        b[A[i]] = 1;
    size_t i = 1;
    int val = 0;
        if(!b[i])
            return i;
        i++;
    free(b);
    return val;
}
    



int solution(int A[], int N) {
    int B[100002];
    for(int i = 0; i < N; i++)
        B[A[i]]++;
    int i = 0;
    while(i++ <= N) {
        if(B[i] == 0)
            return i;
    }
}


