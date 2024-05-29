#ifndef TOKEN_H
#define TOKEN_H

// Definición de etiquetas de tokens
#define AND     256
#define BASIC   257
#define BREAK   258
#define DO      259
#define ELSE    260
#define EQ      261
#define FALSE   262
#define GE      263
#define ID      264
#define IF      265
#define INDEX   266
#define LE      267
#define MINUS   268
#define NE      269
#define NUM     270
#define OR      271
#define PRINT   272
#define READ    273
#define REAL    274
#define TEMP    275
#define TRUE    276
#define WHILE   277
#define INT     278
#define FLOAT   279
#define CHAR    280
#define BOOL    281
#define LT      282
#define GT      283
#define ATR     284

// Definición de la estructura Token
typedef struct Token {
    int tag; // Etiqueta del token
} Token;

// Declaración de funciones
Token* new_Num(int value);
Token* new_Real(float value);
Token* new_Word(char* lexeme, int tag);

#endif /* TOKEN_H */
