#include <stdio.h>

void defineEstilo(int primario, int secundario) {
   
    if(primario == 1 && secundario == 1 || primario == 3 && secundario == 1) {
        printf("Aumenta mais!\n");
    }

    else if (primario == 1 && secundario == 2 || primario == 3 && secundario == 2) {
        printf("Legal\n");
    }

    else if (primario == 2 && secundario == 1) {
        printf("Essa eh punk\n");
    }

    else if (primario == 2 && secundario == 2) {
        printf("Hoje eu choro\n");
    }

}

void escolheEmoji(double fatorMusical) {

    if(fatorMusical >= 1 && fatorMusical <= 4) printf(":'(");
    if(fatorMusical > 4 && fatorMusical <= 7) printf("^_^");
    if(fatorMusical > 7 && fatorMusical <= 10) printf("=D");
}

int main() {

    int estiloPrimario, estiloSecundario;
    double fatorMusical;

    scanf("%d%d%lf", &estiloPrimario, &estiloSecundario, &fatorMusical); 

    defineEstilo(estiloPrimario, estiloSecundario);

    escolheEmoji(fatorMusical);

    return 0;
}