#include "cubo.h"

Cubo::Cubo(double a){
    this-> a = a;
};

Cubo::~Cubo() {

}

double Cubo::get_a(){
    return a;
}

void Cubo::set_a(double a){
    this-> a = a;
}

double Cubo::calculaAreaCubo(){
    int lado = calculaLado();
    return 6*lado;
};

double Cubo::calculaVolumeCubo(){
    int lado = calculaLado();
    return a*lado;
}

double Cubo::calculaLado(){
    return a*a;
}