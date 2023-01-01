#include "PontoDeColeta.h"
#include "E_NotANumber.h"
#include "E_InvalidDate.h"
#include "E_NotAChar.h"
#include "E_NotACEP.h"
#include <cstring>
#include <ctype.h>
#include <iostream>

PontoDeColeta::PontoDeColeta(Endereco endereco, Data data)
{
    for (int i=0; i < endereco.rua.length(); ++i) {
        if (isdigit(endereco.rua[i]))
        {
            throw E_NotAChar();
        }
        else {
            this-> endereco.rua = endereco.rua;
        }
    }

    for (int i=0; i < endereco.numero.length(); ++i) {
        if (!isdigit(endereco.numero[i]))
        {
            throw E_NotANumber();
        }
        else {
            this-> endereco.numero = endereco.numero;
        }
    }

    for (int i=0; i < endereco.cep.length(); ++i) {
        
        if (endereco.cep.length() != 8) {
            throw E_NotACEP();
        }
        else if (!isdigit(endereco.cep[i]))
        {
            throw E_NotACEP();
        }
        else {
            this-> endereco.cep = endereco.cep;
        }
    }

    for (int i=0; i < data.dia.length(); ++i) {
        
        if (data.dia.length() > 2) {
            throw E_InvalidDate();
        }
        else if (!isdigit(data.dia[i]))
        {
            throw E_InvalidDate();
        }
        else {
            this-> data.dia = data.dia;
        }

        if (data.mes.length() > 2)
        {
            throw E_InvalidDate();
        }
        else if (!isdigit(data.mes[i]))
        {
            throw E_InvalidDate();
        }
        else {
            this-> data.mes = data.mes;
        }
        
    }
    
    for (int i=0; i < data.ano.length(); ++i) {
        
        if (data.ano.length() != 4) {
            throw E_InvalidDate();
        }
        else if (!isdigit(endereco.cep[i]))
        {
            throw E_InvalidDate();
        }
        else {
            this-> data.ano = data.ano;
        }
    }

    this-> data.horario = data.horario;
}

PontoDeColeta::~PontoDeColeta()
{
}

std::string PontoDeColeta::getData() {
    std::string str = (data.dia + "/" + data.mes + '/' + data.ano);
    return str;
}
