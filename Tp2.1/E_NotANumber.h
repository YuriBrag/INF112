#include <stdexcept>

class E_NotANumber : public std::exception
{
public:
    virtual const char *what() const noexcept override;
};

const char *E_NotANumber::what() const noexcept
{
    return "Deve ser inserido um numero!";
}