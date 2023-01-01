#include <iostream>
#include "matriz.h"

int main(void) {
    int n;

    std::cout << "Qual sera o tamanho do labirinto?" << std::endl;
    std::cin >> n;

    matriz maze(n);

    maze.leLabirinto();
    // maze.getLabirinto();
    if (maze.verificaSaidaLab(1, 0)) {
        std::cout << "O labirinto possui saida!" << std::endl;
    }
    else {
        std::cout << "O labirinto nao possui saida" << std::endl;
    }
    maze.deleteLabirinto();
}