#ifndef NUM_H
#define NUM_H

#include "Token.h"

// Definición de la estructura Num
typedef struct Num {
    Token token; // Hereda de Token
    int value;   // Valor del número entero
} Num;

// Declaración de funciones
Num* new_Num(int value);

#endif /* NUM_H */
