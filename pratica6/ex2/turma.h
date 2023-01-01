#ifndef INF112_TURMA_H
#define INF112_TURMA_H

#include <string>

class Turma {
    private:
        std::string codigo;
        int ano;
    public:
        Turma(std::string codigo, int ano);

        void setTurma(std::string codigo, int ano);

        std::string getCodTurma();
        int getAnoTurma();
};

#endif