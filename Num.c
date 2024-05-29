#include "Num.h"
#include <stdlib.h>

// Implementación de la función
Num* new_Num(int value) {
    Num* num = (Num*)malloc(sizeof(Num));
    if (num == NULL) {
        // Manejo de error en caso de falla de asignación de memoria
        exit(EXIT_FAILURE);
    }
    num->token.tag = NUM;
    num->value = value;
    return num;
}
