#include <stdexcept>
class Foco
{
private:
    int numero;
    bool encendido;

public:
    Foco()
    {
        this->numero = 0;
        this->encendido = false;
    };
    Foco(int numero)
    {
        this->encendido = false; 
        if (numero > 100 || numero < 0)
        {

            throw new std::runtime_error("numero equivocado");
        }
        else
        {
            this->numero = numero;
        }
        this->numero = numero;
    }
    ~Foco() {}
    void Incrementar(int numero)
    {
        this->numero += numero;
    }
    void Disminuir(int numero)
    {
        this->numero -= numero;
    }
    void Encender()
    {
        this->encendido = true;
    }
    void apagar()
    {
        this->encendido = false;
    }

    bool Imprimir()
    {
        return this->encendido;
    }
};