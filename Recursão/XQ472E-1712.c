#include <stdio.h> 
#include <stdbool.h>

int converte(char numero) {
    return numero - '0';
}

bool zero_a_esquerda(int numero){
    return (numero == 0) ? true : false;
}

void obtem_numeros(char numero, bool zero_a_esqr) {
    
    scanf("%c", &numero);

    if(zero_a_esqr == false) {
        if((zero_a_esquerda(converte(numero)))) obtem_numeros('\0', zero_a_esqr);
        else zero_a_esqr = true; 
    } 
    
    if(converte(numero) >= 0 && converte(numero) <= 9 && zero_a_esqr) {
        obtem_numeros('\0', zero_a_esqr);
        (converte(numero) % 2 == 0) ? printf(".") : printf("-");
    } 

}


void chama_funcao(int contador) {
    
    if(contador < 10) {
        obtem_numeros(0, false);
        printf("\n");
        chama_funcao(contador+1);
    }
}

int main() {
    chama_funcao(0);
    return 0;
}