#ifndef ATRIBUTO_H
#define ATRIBUTO_H

typedef struct {
    int id; 
    char nome[100];
}

Atributo criar_atributo(int id, const *char nome);

#endif
