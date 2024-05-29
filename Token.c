#include "Token.h"
#include <stdlib.h>

// Implementación de las funciones

Token* new_Num(int value) {
    Token* token = (Token*)malloc(sizeof(Token));
    if (token == NULL) {
        // Manejo de error en caso de falla de asignación de memoria
        exit(EXIT_FAILURE);
    }
    token->tag = NUM;
    return token;
}

Token* new_Real(float value) {
    Token* token = (Token*)malloc(sizeof(Token));
    if (token == NULL) {
        // Manejo de error en caso de falla de asignación de memoria
        exit(EXIT_FAILURE);
    }
    token->tag = REAL;
    return token;
}

Token* new_Word(char* lexeme, int tag) {
    Token* token = (Token*)malloc(sizeof(Token));
    if (token == NULL) {
        // Manejo de error en caso de falla de asignación de memoria
        exit(EXIT_FAILURE);
    }
    token->tag = tag;
    return token;
}
