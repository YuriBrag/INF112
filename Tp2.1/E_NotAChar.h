#include <stdexcept>

class E_NotAChar : public std::exception
{
public:
    virtual const char *what() const noexcept override;
};

const char *E_NotAChar::what() const noexcept
{
    return "O nome da rua nao deve conter numeros!";
}