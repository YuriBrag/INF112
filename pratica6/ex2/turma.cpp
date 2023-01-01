#include "turma.h"

Turma::Turma(std::string codigo, int ano) {
  this->codigo = codigo;
  this->ano = ano;
}

void Turma::setTurma(std::string codigo, int ano) {
  this->codigo = codigo;
  this->ano = ano;
}

std::string Turma::getCodTurma() {
  return codigo;
};

int Turma::getAnoTurma() {
  return ano;
};