#include <stdio.h>
#include <stdbool.h>

bool validaNumero(double numero, double media) {
    if(numero > media) 
        return 1;
    return 0; 
}

int contaNumerosAcima(double numeros[], double media, int numerosAcima, int contador) {

    if(contador < 3) {

        if(validaNumero(numeros[contador], media))
            numerosAcima++;

        return contaNumerosAcima(numeros, media, numerosAcima, contador+1);
    }
   
    return numerosAcima;
}

double media(double x, double y, double z) {
    return (x + y + z)/3; 
}

int main() {

    double numeros[3]; 

    scanf("%lf%lf%lf", &numeros[0],&numeros[1],&numeros[2]);

    double calc = media(numeros[0], numeros[1], numeros[2]);

    printf("%d", contaNumerosAcima(numeros, calc, 0, 0));

    return 0;
}