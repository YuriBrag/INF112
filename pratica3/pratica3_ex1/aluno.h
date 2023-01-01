#include <iostream>
#include <string>

struct Aluno {
    std :: string _name;
    int _matricula;
    int _nDisc;
    int *notas;
    double _media;


    Aluno(std::string name, int matricula, int nDisc); //declaração do construtor

    void adicionaNota(int n, int nota); //metodo de adicionar nota

    void calcMediaAluno(); //metodo de calcular media

    void imprimeInfosAluno(); //metodo de imprimir a nota

};