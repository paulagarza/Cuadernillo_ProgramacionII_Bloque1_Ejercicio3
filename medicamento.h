#ifndef MEDICAMENTO_H
#define MEDICAMENTO_H

#include <iostream>
using namespace std;

class Medicamento {
protected:
    // Atributos
    string codigoReferencia;
    int unidadesStock;

public:
    // Constructor por defecto
    Medicamento();

    // Constructor parametrizado
    Medicamento(const string& codigoReferencia, int unidadesStock);

    // Destructor
    virtual ~Medicamento() = default;

    // Getters
    string getCodigoReferencia() const;
    int getUnidadesStock() const;

    // Setters
    void setCodigoReferencia(const string& codigoReferencia);
    void setUnidadesStock(int unidadesStock);

    // Método virtual puro
    virtual string evaluarCaducidad() = 0;

};

#endif // MEDICAMENTO_H
