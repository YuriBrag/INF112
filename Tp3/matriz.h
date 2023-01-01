#ifndef MATRIZ_H
#define MATRIZ_H

class matriz
{
private:

    int n;
    int **value;
    
public:
    matriz(int n);
    ~matriz();

    void leLabirinto();
    bool verificaSaidaLab(int x, int y);
    void getLabirinto();
    void deleteLabirinto();
};

#endif