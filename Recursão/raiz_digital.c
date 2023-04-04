#include <stdio.h>
#include <stdbool.h>

bool eh_valor_base(int numero){
    if(numero / 10 == 0) return true;
    return false;
} 

int obtem_raiz_digital(int valor, int soma) {

    int valor_antes_virgula = valor / 10; 
    int valor_depois_virgula = valor % 10; 

    soma = soma + valor_depois_virgula; 

    if(valor_antes_virgula == 0) {

        if(eh_valor_base(soma)) return soma; 
        else obtem_raiz_digital(soma, 0);
        
    } else obtem_raiz_digital(valor_antes_virgula, soma);

}

void percorre_reais_positivos(int numero, int posicao, int contador, int encontrados) {

    int raiz_digital_encontrada = obtem_raiz_digital(contador, 0);

    if(raiz_digital_encontrada != numero) percorre_reais_positivos(numero, posicao, contador+1, encontrados);
    else {
        encontrados++;
        if(encontrados == posicao) printf("%d\n", contador);
        else percorre_reais_positivos(numero, posicao, contador+1, encontrados);
    }
}

void obtem_valores(int contador) {

    if(contador == 0) return;

    int posicao, numero; 
    scanf("%d %d", &posicao, &numero);

    percorre_reais_positivos(numero, posicao, 1, 0);

    obtem_valores(contador-1);

}

int main() {
    int contador; 
    scanf("%d", &contador);
    obtem_valores(contador);
}