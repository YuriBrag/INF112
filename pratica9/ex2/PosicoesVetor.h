#ifndef POSICOES_VETOR_H
#define POSICOES_VETOR_H

class PosicoesVetor
{
private:
    int *value;
    int y;
public:
    PosicoesVetor(int y);
    ~PosicoesVetor();

    void preencherValores();
};

#endif