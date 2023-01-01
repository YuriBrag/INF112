#include <stdexcept>

class E_InvalidDate : public std::exception
{
public:
    virtual const char *what() const noexcept override;
};

const char *E_InvalidDate::what() const noexcept
{
    return "Essa data nao e valida!";
}