#include <iostream>

struct ListaVetor
{
    int *_elementos;
    int _nElementos;

    ListaVetor(int nElementos);

    ~ListaVetor();

    void inserirElemento(int i, int n);

    void imprime();

    void removePrimeiro();

    void removeUltimo();

    void inverte();
};
