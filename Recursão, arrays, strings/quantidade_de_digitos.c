#include <stdio.h>

int obtem_numero_digitos(int valor, int soma) {

    int valor_antes_virgula = valor / 10; 

    soma++; 

    if(valor_antes_virgula == 0) return soma; 
    else obtem_numero_digitos(valor_antes_virgula, soma);

}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d", obtem_numero_digitos(n, 0));
    return 0;
}