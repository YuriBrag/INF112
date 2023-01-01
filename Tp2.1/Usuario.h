#ifndef USUARIO_H
#define USUARIO_H

#include <cstring>

class Usuario
{
private:
    Usuario();
    ~Usuario();
public:
    void CreateUser(std::string nome);
};

#endif