#ifndef INF_112_ALUNOS_H
#define INF_112_ALUNOS_H

#include <string>

class Alunos
{
private:
    std::string nome;
    double media;
    int matricula;
public:
    Alunos(int matricula, std::string nome, double x, double y);

    std::string get_nome();
    double get_media();
    int get_matricula();
    
};

#endif