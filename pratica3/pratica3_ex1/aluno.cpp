#include <iostream>
#include "aluno.h"

Aluno::Aluno(std::string name, int matricula, int nDisc) { //atribuição do que se recebe da main para os atributos do construtor
    _name = name;
    _matricula = matricula;
    _nDisc = nDisc;
    _media = 0;
    notas = new int [nDisc]; //alocacao dinamica das notas
}

//funcoes

void Aluno::adicionaNota(int n, int nota){ //recebe de um for na main o valor da nota e sua posi na matriz
    notas[n] = nota;
};

void Aluno::calcMediaAluno(){ //percorre o vetor das notas somando e fazendo a media
    for(int i=0; i< _nDisc; i++) {
        _media += notas[i];
    }
    _media = _media/_nDisc;
};

void Aluno::imprimeInfosAluno() { //imprime os valores
    std::cout << "Nome: "<< _name << std::endl;
    std::cout << "Matricula: " << _matricula << std::endl;
    std::cout << "Media: " << _media << std::endl;
};