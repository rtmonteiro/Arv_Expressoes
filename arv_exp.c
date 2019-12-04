//
// Created by 2019202359 on 04/12/19.
//

#include <stdlib.h>
#include "arv_exp.h"

struct arv {
    char expressao;
    Arv* esq;
    Arv* dir;
};

Arv *CriaVazia(void) {
    return NULL;
}

Arv *CriaOperador(char c, Arv *esq, Arv *dir) {
    Arv* a = (Arv*)malloc(sizeof(Arv));
    a->expressao = c;
    a->esq = esq;
    a->dir = dir;
    return a;
}

Arv *CriaOperando(int valor) {
    Arv* a = (Arv*)malloc(sizeof(Arv));
    a->expressao = (char) (valor + '0');
    a->esq = NULL;
    a->dir = NULL;
    return a;
}

void Imprime(Arv *arv) {

}


