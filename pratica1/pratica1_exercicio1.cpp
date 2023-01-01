#include <iostream>
using namespace std;

int main()
{
    long int value1 = 200000, value2 = 0;
    long *longPtr;
    longPtr = &value1;
    cout << *longPtr << endl;
    *longPtr = value2;
    cout << value2 << endl;
    cout << &value1 << endl;
    cout << longPtr << endl; //O endereço armazenado por longPtr ao final é do value1, porém o valor que esse endereço contem é do value2, porque em *longPtr = value2 se atribui 
                             //apenas o conteúdo do endereço, e não o endereço em si de value2.
    return 0;
}