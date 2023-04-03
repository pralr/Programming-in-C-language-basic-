#include <stdio.h>
#include <stdlib.h>

void mediaGolsPorPartida(double flamengo, double corinthias, int contagemPontos[]) {

    int media = 2;

    if(flamengo >= media) contagemPontos[0]+=10; 
    if(corinthias >= media) contagemPontos[1]+=10;
    
}

void maiorQuantidadeGols(int flamengo, int corinthias, int contagemPontos[]) {

    if(flamengo > corinthias) {
        contagemPontos[0]+=15;
    } else {
        contagemPontos[1]+=15;
    }

}

void jogadorEscalado(int P, int Y, int contagemPontos[]) {

    if(P == 1) contagemPontos[0]+=20; 
    if(Y == 1) contagemPontos[1]+=20;
    
}

void numeroVitorias(int contador, int flamengo, int corinthias, int contagemPontos[]) {   
    char time;


    if(contador < 5) {
        // %c ignora espaco e quebra de linha (\n) quando tiver um espaco antes de porcentagem
        scanf(" %c", &time);

        if(time == 'f') {
            flamengo++; 
        } else {
            corinthias++;
        }

        numeroVitorias(contador+1, flamengo, corinthias, contagemPontos);
    } else {
        
        if(flamengo > corinthias) {
            contagemPontos[0]+=40;
        } else {
            contagemPontos[1]+=40;
        }
    }
}

void obtemVencedor(int contagemPontos[]) {

    if(contagemPontos[0] > contagemPontos[1]) {
        printf("Luiza tem mais chances de comer o brownie\nPontos:%d", contagemPontos[0]);
    } else {
        printf("Pedro tem mais chances de comer o brownie\nPontos:%d", contagemPontos[1]);
    }

}

int main() {

    int contagemPontos[2] = {0, 0};
    numeroVitorias(0, 0, 0, contagemPontos);

    int P, Y; 
    scanf("%d%d", &P, &Y);
    jogadorEscalado(P, Y, contagemPontos);

    scanf("%d%d", &P, &Y);
    maiorQuantidadeGols(P, Y, contagemPontos);

    double F, C; 
    scanf("%lf%lf", &F, &C);
    mediaGolsPorPartida(F, C, contagemPontos);

    obtemVencedor(contagemPontos); 

    return 0;
}