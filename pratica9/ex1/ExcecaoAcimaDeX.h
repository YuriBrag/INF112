#include <stdexcept>

class ExcecaoAcimaDeX : public std::exception
{
public:
    virtual const char *what() const noexcept override;
};

const char *ExcecaoAcimaDeX::what() const noexcept
{
    return "Soma maior que o maximo";
}