#include <iostream>
#include <algorithm>
#include <vector>
#include "Alunos.h"

bool ordenaAlunos(Alunos &a, Alunos &b){
    if(a.get_nome() != b.get_nome()){
        return a.get_nome() < b.get_nome();
    }
    else if(a.get_media() != b.get_media()){
        return a.get_media() < b.get_media();
    }
    else{
        return a.get_matricula() < b.get_matricula();
    }
}

void imprimeBits(unsigned int n) {
    for(int i = 3; i >= 0; i--) {
        if (i != 0 && i%8 == 0){ 
            std::cout << " ";
        }

        if ( (n & (1 << i)) != 0){
            std::cout << 0;
        }
        else {
            std::cout << 1;      
        }
    }   
}

int main(){

    std::vector<Alunos> listaAlunos;

    std::string nome;
    double x, y;
    int matricula;
    int nAlunos = 0;

    while(true) {
    std::cin >> matricula;
    if(matricula == -1){
        break;
    } 
    std::cin >> nome; 
    std::cin >> x >> y;

    listaAlunos.push_back(Alunos(matricula, nome, x, y));
    nAlunos++;
    }

    sort(listaAlunos.begin(),listaAlunos.end(), ordenaAlunos);

    for(int i = 0;i < nAlunos; i++){
        imprimeBits(listaAlunos[i].get_matricula());
        std::cout << " - " << listaAlunos[i].get_nome() << " - " << listaAlunos[i].get_media() << std::endl;
    }

    return 0;
}

