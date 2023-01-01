#include <iostream>
using namespace std;

void leiaInteiros1(int &x, int &y) //Passagem por referencia
{
    cout << "Digite dois numeros inteiros" << endl;
    cin >> x >> y;
}
void leiaInteiros2(int *x, int *y)
{
    cout << "Digite dois numeros inteiros" << endl;
    cin >> *x >> *y; //Derreferencia x e y para atribuir valores ao endereço desses ponteiros
}
int main()
{
    int a, b;
    leiaInteiros1(a, b);
    cout << a << " " << b << endl;
    leiaInteiros2(&a, &b); //Passa o valor do endereco de a e b para a func
    cout << a << " " << b << endl;
    return 0;
}