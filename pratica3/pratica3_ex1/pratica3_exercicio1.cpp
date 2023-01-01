#include <iostream>
#include <string>
#include "aluno.h"

int main() {
    std::string name;
    int matricula, nDisc, i;
    int nota;

    std :: cout << "Escreva o nome, matricula e numero de disciplinas do aluno." << std :: endl;
    
    std :: cin >> name >> matricula >> nDisc;

    std :: cout << "De entrada nas notas do aluno de cada disciplina." << std :: endl;

    Aluno est(name, matricula, nDisc); //cria um aluno chamado est com o name matric e nDisc
    
    for(i = 0; i< nDisc; i++) { //manda a nota do cin para o metodo est.adicionaNota() ou seja adiciona nota ao estudante
        std::cin >> nota;
        est.adicionaNota(i, nota);
    }

    est.calcMediaAluno(); //calcula media do est

    est.imprimeInfosAluno();

    return 0;
}