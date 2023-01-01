#include <iostream>
#include "Alunos.h"

Alunos::Alunos(int matricula, std::string nome, double x, double y){

    this-> matricula = matricula;
    this-> nome = nome;
    this-> media = (x + y)/2;

};

int Alunos::get_matricula(){
    return matricula;
};

std::string Alunos::get_nome(){
    return nome;
};

double Alunos::get_media(){
    return media;
};
