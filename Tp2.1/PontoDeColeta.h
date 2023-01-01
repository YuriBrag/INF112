#ifndef PONTO_DE_COLETA
#define PONTO_DE_COLETA 

#include <cstring>
#include <iostream>

struct Data
{
    std::string dia;
    std::string mes;
    std::string ano;
    std::string horario;
};

struct Endereco
{
    std::string rua;
    std::string numero;
    std::string cep;
};


class PontoDeColeta //talvez tenha q fazer o a data ser subclasse de ponto de coleta, para que todo agendamento tenha um ponto de coleta e se possa cadastrar pontos de coleta sem data.
{
private:
    Endereco endereco;
    Data data;

    // Usuario receptor;
    // Usuario doador;
public:
    PontoDeColeta(Endereco endereco, Data data);
    ~PontoDeColeta();

    std::string getData();
    std::string getEndereco();
};


#endif