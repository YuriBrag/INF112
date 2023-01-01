#include <iostream>

#include "estudante.h"
#include "pessoa.h"
#include "turma.h"

void f(Pessoa &pessoa) {
  std::cout << "Na funcao: " << pessoa.defina_meu_tipo() << std::endl;
}

int main() {
  Pessoa pessoa("Julio Reis.");
  Turma INF110("INF110", 2022);
  Turma MAT147("MAT147", 2021);
  Estudante estudante("Jane Doe", 20180101, INF110);

  estudante.setTurmaEstudante(MAT147);
  std::cout << "A pessoa eh: " << pessoa.defina_meu_tipo() << std::endl;
  std::cout << "O estudante eh: " << estudante.defina_meu_tipo() << std::endl;
  std::cout << "O a turma do estudante eh: " << estudante.getCodTurmaEstudante() << std::endl;
  std::cout << "O a turma do estudante eh do ano de: " << estudante.getAnoTurmaEstudante() << std::endl;
  f(pessoa);
  f(estudante);
  return 0;
}