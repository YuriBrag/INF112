#include <iostream>
#include "PontoDeColeta.h"
#include "E_InvalidDate.h"
#include "E_NotANumber.h"
#include "E_NotACEP.h"


int main(void) {

    try {
        
    }
    
    catch(const std::exception &E_InvalidDate) {
        std::cerr << E_InvalidDate.what() << '\n';
    }
    
    catch(const std::exception &E_NotANumber) {
        std::cerr << E_NotANumber.what() << '\n';
    }
    catch(const std::exception &E_NotAChar) {
        std::cerr << E_NotAChar.what() << '\n';
    }
    catch(const std::exception &E_NotACEP) {
        std::cerr << E_NotACEP.what() << '\n';
    }
    
}

