#include <iostream>
using namespace std;

int calculaTamanhoString1(char v[]){
    int cont = 0;

    for (int i = 0; v[i] != '\0'; i++){
        cont++;
    }
    return cont;
}
int calculaTamanhoString2(char v[]){
    int cont = 0;
    char *ptr = &(v[0]);

    for (int i = 0; *(ptr + i) != '\0'; i++){ // percorre o ponteiro somando um contador a ele, assim vai de endereco a outro seguinte
        cont++;
    }
    return cont;
}
int calculaTamanhoString3(char v[]){
    char *i;

    for (i = v; *i; i++){} //percorre até que *i seja falso(n exista mais char para percorrer \0)
    return (i - &v[0])/sizeof(*i); //faz a diferenca entre o ultimo endereco (i) e o primeiro, dividindo pelo tamanho de bytes de um char
}

int main(){
    char str[51];
    cout << " Digite alguma string ... ( com ate 50 caracteres ): ";
    cin.getline(str, 50);
    char *w = str;
    cout << " Tamanhos calculados : " << endl;
    cout << " " << calculaTamanhoString1(w) << " " << calculaTamanhoString2(w) << " " << calculaTamanhoString3(w) << endl;
    return 0;
}