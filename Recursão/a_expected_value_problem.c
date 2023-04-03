#include <stdio.h>

int obtem_numerador(int contador, int numerador, int n) {

    if(contador == 0) numerador = contador + 1;
    else numerador = numerador + contador; 

    return numerador;

}

int obtem_denominador(int contador, int denominador, int numerador, int n) {

    if(contador <= n) {

        numerador = obtem_numerador(contador, numerador, n);
        
        denominador = denominador + numerador;

        obtem_denominador(contador+1, denominador, numerador, n);

    } else return denominador;   

}

double obtem_fracao(int contador, int n, int numerador, double denominador, double fracao, double EV) {

    if(contador <= n) {

        numerador = obtem_numerador(contador, numerador, n);

        fracao = ((numerador / denominador) * contador); 

        EV = EV + fracao;
    
        obtem_fracao(contador+1, n, numerador, denominador, fracao, EV);

    } else return EV;
    
}

void caso_base(int n) {

    if (n == 1) printf("1.00"); // se é caso base 
    else {
        int denominador = obtem_denominador(1, 0, 0, n);
        printf("%.2lf", obtem_fracao(1, n, 0, (double)denominador, 0.0, 0.0));
    }
}

int obtem_valor() {
    int n;
    scanf("%d", &n);
    return n;
}

int main() {
    caso_base(obtem_valor());
    return 0;
}