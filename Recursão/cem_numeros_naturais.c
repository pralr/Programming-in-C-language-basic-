#include <stdio.h>

void numeros_naturais(int contador) {
    if(contador < 100) return printf("%d\n", contador), numeros_naturais(contador+1);
}

int main() {
    numeros_naturais(0);
    return 0;
}