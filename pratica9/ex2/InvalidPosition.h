#include <stdexcept>

class InvalidPosition : public std::exception
{
public:
    virtual const char *what() const noexcept override;
};

const char *InvalidPosition::what() const noexcept
{
    return "Voce esta tentando inserir um numero em uma posicao invalida do vetor(menor que zero ou maior que y)";
}