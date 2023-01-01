#include "estudante.h"

Estudante::Estudante(std::string nome, int matricula, Turma turma):
  Pessoa(nome), _matricula(matricula), turma(turma) {};

int Estudante::get_matricula() const {
  return this->_matricula;
}

std::string Estudante::defina_meu_tipo() const {
  return "Sou um estudante";
}

void Estudante::setTurmaEstudante(Turma turma) {
  this->turma = turma;
};

std::string Estudante::getCodTurmaEstudante() {
  return turma.getCodTurma();
};

int Estudante::getAnoTurmaEstudante() {
  return turma.getAnoTurma();
};