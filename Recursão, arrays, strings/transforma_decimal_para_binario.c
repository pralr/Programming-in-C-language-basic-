#include <stdio.h>

int obtem_numero_binario(int numero) {
    
    int divisao = numero / 2; 
    numero = numero % 2; 

    if(divisao == 0) return divisao;
    
    obtem_numero_binario(divisao);

    printf("%d\n", numero);

}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d", obtem_numero_binario(n));
    return 0;
}