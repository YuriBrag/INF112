class Cubo{
    private:
        double a;
    public:
        Cubo(double a);
        ~Cubo();
        double get_a();
        void set_a(double a);
        double calculaAreaCubo();
        double calculaVolumeCubo();
        double calculaLado();
};