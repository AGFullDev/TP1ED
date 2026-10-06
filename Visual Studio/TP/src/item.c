#include "item.h"
#include <string.h>

Item criar_item(int id, const char *nome){
    Item it;
    it.id = id;

    strcpy(it.nome, nome);

    return it;

}