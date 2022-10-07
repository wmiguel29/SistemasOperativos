#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void intToBin(int n, char* binary, int binary_size){
    int pos = binary_size - 1;
    
    while(n > 0){
        binary[pos] = n % 2 ? '1' : '0';
        n /= 2;
        pos -= 1;
    }
}

int calcGap(char* bin, int bin_size){
    int i, start=0, gap=0, tmp_gap=0;

    for(i=0; i<bin_size; i++){
        if(bin[i] == '1'){
            if(start++){
                gap = gap > tmp_gap ? gap : tmp_gap;
                tmp_gap = 0;
            }
        }else if(start){
            ++tmp_gap;
        }
    }	
    
    return gap;
}

int solution(int N) {
    int i, n, bin_size = (sizeof(int) * 8);
    char *bin = (char *)malloc(bin_size);
    if(bin==NULL){
        exit(0);
    }
    memset(bin, '0', bin_size);
    
    intToBin(N, bin, bin_size);
    int gap = calcGap(bin, bin_size);
    free(bin);
    
    return gap;
}

// Comment code below before running in Codility.
// /*
int main(){
    int n;
    
    printf("Enter number to find its binary gap: ");
    scanf("%d", &n);
    
    printf("Calculated gap: %d\n", solution(n));

    return 0;
}
// */