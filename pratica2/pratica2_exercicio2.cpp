#include <iostream>
#include <string>
#include <new>
using namespace std;

struct Imagem {
    string name;
    int **pixels;
    int nRows;
    int nColumns;
};

void leImagem(Imagem &x) {

    cin >> x.name >> x.nColumns >> x.nRows;
    
    for(int i = 0; i< x.nRows; i++) {
        x.pixels[i] = new int [x.nColumns]();
    }

    for(int i = 0; i < x.nRows; i++) {
        for (int j = 0; j < x.nColumns; j++) {
            cin >> x.pixels[i][j];
        }
    }

}

void deletaImagem (Imagem &x) {
    
    for(int i = 0; i< x.nRows; i++) {
        delete[] x.pixels[i];
    }
    delete[] x.pixels;
}

void imprimeImagem (Imagem &x) {

    cout << "p1" << endl;
    cout << x.nColumns << " " << x.nRows << endl;

    for(int i = 0; i < x.nRows; i++) {
        for (int j = 0; j < x.nColumns; j++) {
            cout << x.pixels[i][j] << " ";
        }
        cout << endl;
    }
}

void inverteCorImagem (Imagem &x) {

    for(int i = 0; i < x.nRows; i++) {
        for (int j = 0; j < x.nColumns; j++) {
            if (x.pixels[i][j] == 0) {
                x.pixels[i][j] = 1;
            }
            else if (x.pixels[i][j] == 1) {
                x.pixels[i][j] = 0;
            }   
        }
    }
}

int main() {
    Imagem im;
    leImagem(im);
    inverteCorImagem(im);
    imprimeImagem(im);
    deletaImagem(im);

    return 0;
}