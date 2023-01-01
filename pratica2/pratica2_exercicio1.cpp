#include <iostream>
#include <stdlib.h>
using namespace std;

void preencheAleatorios(int *x, int n)
{
    for (int i = 0; i < n; i++)
    {
        *(x + i) = rand() % 10;
    }
}
void imprime(int *x, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << *(x + i) << ", ";
    }
    cout << endl;
}
void contaParImpar(int *x, int *y, int n, int &nPar, int &nImpar)
{
    for (int i = 0; i < n; i++)
    {
        if (((*(x + i) + *(y + i)) % 2) == 0)
        {
            nPar++;
        }
        else
        {
            nImpar++;
        }
    }
    cout << "Par: " << nPar << endl;
    cout << "Impar: " << nImpar << endl;
}

int main()
{
    int n = 0;
    int nPar = 0, nImpar = 0;

    while (n >= 0)
    {
        cout << "Quantas jogadas voce fara?" << endl;
        cin >> n;
        int *a = new int[n];
        int *b = new int[n];
        preencheAleatorios(a, n);
        preencheAleatorios(b, n);

        imprime(a, n);
        imprime(b, n);

        contaParImpar(a, b, n, nPar, nImpar);
        nPar = 0;
        nImpar = 0;
        delete[] a;
        delete[] b;
        return 0;
    }
    return 0;
}