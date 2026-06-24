#include <stdio.h>

int funcaoRec(int n){
    if (n<=2) return n+1;
    else return funcaoRec(n-1) + 2*funcaoRec(n-2);
}

int funcaoIterativa(int n) {
    if (n <= 2) 
        return n + 1;

    int n_minus_1 = 3; 
    int n_minus_2 = 2;
    int atual = 0;

    for (int i = 3; i <= n; i++) {
        atual = n_minus_1 + 2 * n_minus_2;
        n_minus_2 = n_minus_1;
        n_minus_1 = atual;
    }

    return atual;
}