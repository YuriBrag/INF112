#ifndef INF112_ESTUDANTE_H
#define INF112_ESTUDANTE_H

#include "pessoa.h"
#include "turma.h"

class Estudante : public Pessoa {
private:
  int _matricula;
  Turma turma;
public:
  Estudante(std::string nome, int matricula, Turma turma);

  int get_matricula() const;
  virtual std::string defina_meu_tipo() const override;

  void setTurmaEstudante(Turma turma);

  std::string getCodTurmaEstudante();
  int getAnoTurmaEstudante();

};

#endif