#ifndef AVENTUREIRO_H
#define AVENTUREIRO_H

typedef struct {
    int id; 
    char nome[100];
}Aventureiro;

Aventureiro aventureiro{int id, const char *nome};

#endif