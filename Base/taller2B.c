#include <stdio.h>

int solution(int A[], int N) {
    // write your code in C99 (gcc 6.2.0)
    int i;
    int val = A[0];
    for (i = 1; i<N; i++) 
    {
        val ^= A[i];
    }
    return val;

}
    
        
