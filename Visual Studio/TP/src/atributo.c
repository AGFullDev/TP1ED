#include  "atributo.h"
#include <string.h>

Atributo criar_atributo(int id, const char *nome){
    Atributo a;

    a.id = id;
    strcpy(a.nome, nome);

    return a;
}


