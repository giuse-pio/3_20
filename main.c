#include <stdio.h>

int main(void) {
    int anno;
    printf("inserisci un anno: ");
    scanf("%d", &anno);
    if (anno%4 == 0 && anno%400 == 0) {
        printf("l'anno e' bisestile");
    }else {
        printf("l'anno non e' bisestile");
    }
    return 0;
}