#include <stdio.h>
// you can write to stdout for debugging purposes, e.g.
// printf("this is a debug message\n");

struct Results {
  int * A;
  int N; // Length of the array
};

struct Results solution(int A[], int N, int K) {
    struct Results result;
    // write your code in C99 (gcc 6.2.0)
    int i, j, tmp;
    int *B = (int *)malloc(N * sizeof(int));
    if(B==NULL){
        exit(0);
    }
    for(i=0; i<N; i++){
        j = (i + K) % N;
        B[j] = A[i];
    }
    result.A = B;

    result.N = N;
    return result;
}
