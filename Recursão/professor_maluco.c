#include <stdio.h>

int main(int numero) {

    scanf("%d", &numero);

    if(numero == 0) return 0;

    main(numero);

    printf("%d\n", numero);
    
}