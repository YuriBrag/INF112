#include <iostream>
using namespace std;

struct Jogador {
    int pontos, x, y;
};


void leDadosJogador (Jogador *p) { //atribui os dados dos jogadores para cada um do vetor, por referencia
    cout << "Defina os pontos, e coordenadas do jogador: " << endl;
    cin >> p->pontos >> p->x >> p->y; //acessa cada atributo da struct assim como p.pontos, p.x e p.y, mas como é ponteiro fica " -> "
}

int main() {
    Jogador j[5];
    Jogador *prtJ = &(j[0]); //cria um ponteiro de Jogadores que se inicia no local de memoria do j[0]
    for (int i = 0; i < 5; i++){ //chama a funcao para cada jogador do vetor, como se fosse leDadosJogador(j[i]), mas ao inves disso passa um ponteiro(ptrJ)
        leDadosJogador(prtJ + i);
    }
    cout << endl;
    for (int i = 0; i < 5; i++){ //da cout em cada atributo do local de memoria somado do contador i
        cout << (prtJ+i)->pontos << " " << (prtJ+i)->x << " " << (prtJ+i)->y << endl;
    }

    return 0;
}
