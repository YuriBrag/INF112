#include <iostream>

#include "matriz.h"

matriz::matriz(int n) { //aloca dinamicamente o espaco da matriz na classe
    this->n = n;

    value = new int *[n];

    for (int i = 0; i < n; i++) {
        value[i] = new int [n];
    }
}

matriz::~matriz(){}

void matriz::leLabirinto() { //funcao para ler os valores do labirinto
    std::cout << "Digite os valores do labirinto" << std::endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            std::cin >> value[i][j];
        }
    }
}

void matriz::getLabirinto() {
    std::cout << "O labirinto tem a seguinte configuração: " << std::endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            std::cout << value[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

bool matriz::verificaSaidaLab(int x, int y) { //funcao recursiva para verificar se o labirinto possui saida ou nao

  if (x < 0 || y < 0 || x >= n || y >= n) { //para posicoes nenores que o tamanho da matriz, retorna falsa para os ifs abaixo
    return false;
  }

  if (value[x][y] == 1 || value[x][y] == 2) { //se for parede ou ja tiver verificado a posicao retorna falso para os ifs abaixo
    return false;
  }

  if (value[x][y] == 7) { //se chegou na saida retorna verdade e passa de todos os ifs
    return true;
  }

  value[x][y] = 2; //seta as posiçoes verificadas como 2 (backtracking)

  //verifica posicao por posicao da matriz por recursividade, assim vai andando ate nao possuir saida ou chegar nela

  if (verificaSaidaLab(x + 1, y)) { //chama a propria funcao para a proxima linha e verifica os ifs acima 
    return true;
  }

  if (verificaSaidaLab(x - 1, y)) { //chama a propria funcao para a linha anterior e verifica os ifs acima 
    return true;
  }

  if (verificaSaidaLab(x, y + 1)) {  //chama a propria funcao para a proxima coluna e verifica os ifs acima 
    return true;
  }

  if (verificaSaidaLab(x, y - 1)) { //chama a propria funcao para a coluna anterior e verifica os ifs acima
    return true;
  }

  return false;

}

void matriz::deleteLabirinto() { //deleta as linhas da matriz que sao vetores dentro de outro vetor que é posteriormente deletado
    for (int i = 0; i < n; i++) {
        delete[] value[i];
    }
    delete[] value;
}