#include <stdio.h>

int sumVet(int v[], int n){
    if(n == 0) return v[0];
    else return v[n]+sumVet(v, n-1);
}

int main(){
    int v[3] = {2,5,3};
    printf("Soma: %d", sumVet(v, 2));
}
