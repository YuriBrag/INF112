#include <iostream>
#include "listaVetor.h"

ListaVetor::ListaVetor(int nElementos)
{
    _elementos = new int[nElementos];
    _nElementos = nElementos;
}
ListaVetor::~ListaVetor()
{
    delete[] _elementos;
}

void ListaVetor::inserirElemento(int i, int n)
{
    _elementos[i] = n;
}

void ListaVetor::imprime()
{
    int i = 0;
    for (i = 0; i < _nElementos - 1; i++)
    {
        std::cout << _elementos[i] << ", ";
    }
    std::cout << _elementos[i] << std::endl;
}

void ListaVetor::removeUltimo()
{
    --_nElementos;
}

void ListaVetor::removePrimeiro()
{
    int i = 0;
    --_nElementos;
    for (i = 0; i < _nElementos; i++)
    {
        _elementos[i] = _elementos[i + 1];
    }
}

void ListaVetor::inverte()
{
    int i = 0;
    int j = 0;

    int vAux[_nElementos];

    for (i = 0; i < _nElementos; i++)
    {
        vAux[i] = _elementos[i];
    }

    for (i = 0, j = _nElementos - 1; j >= 0; j--, i++)
    {
        _elementos[i] = vAux[j];
    }
}