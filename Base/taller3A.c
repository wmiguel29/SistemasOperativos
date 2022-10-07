#include <stdio.h>

int solution(int X, int Y, int D) {
    // write your code in C99 (gcc 6.2.0)
    int aux = 0;

    while(X < Y){
        X = X + D;
        aux++;

    }

    return aux;
}


int FrogJmp(int X, int Y, int D)
{
    int t = Y - X;
    return t/D + ((t%D) > 0);
}

int solution(int X, int Y, int D) {
    int res = Y - X;
    if(res % D == 0)
        res /= D;
    else
        res = res / D + 1;
    return res;
}