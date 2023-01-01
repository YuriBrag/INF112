#include <stdexcept>

class E_NotACEP : public std::exception
{
public:
    virtual const char *what() const noexcept override;
};

const char *E_NotACEP::what() const noexcept
{
    return "Deve ser inserido um CEP valido (sem o hifen)!";
}