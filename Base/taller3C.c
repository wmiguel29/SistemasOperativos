#include <stdio.h>
#include <math.h>

int solution(int A[], int N) {
    // write your code in C99 (gcc 6.2.0)
    int *p = malloc(sizeof(int) * N);
    int i, min_sum = 2001, right_sum, left_sum, tmp;
    
    for (p[0] = A[0], i = 1; i < N; i++)
    {
        p[i] = p[i-1] + A[i];
    }
    
    for (i = 1; i<N; i++)
    {
        left_sum = p[i-1];
        right_sum = p[N-1] - left_sum;
        tmp = abs(left_sum-right_sum);
        if (tmp < min_sum)
        {
            min_sum = tmp;
            if (min_sum == 0)
            {
                break;
            }
        }
    }
    
    return min_sum;

        
}

