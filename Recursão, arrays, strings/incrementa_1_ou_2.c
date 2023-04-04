#include <stdio.h>
#include <stdbool.h>


bool eh_par(numero) {
    if(numero % 2 == 0) return true;
    return false;
}

int obtem_numero_a_esquerda(int numero) {

    int valor_antes_virgula = numero / 10; 

    if(valor_antes_virgula == 0) return numero; 
    else obtem_numero_a_esquerda(valor_antes_virgula);
}

int obtem_retorno(int numero) {
    if(eh_par(obtem_numero_a_esquerda(numero))) return numero + 2;
    return numero + 1;
}


int main() {
    int n;
    scanf("%d", &n);
    printf("%d", obtem_retorno(n));
    return 0;
}