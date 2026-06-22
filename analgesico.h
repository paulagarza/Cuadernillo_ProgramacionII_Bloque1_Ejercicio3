#ifndef ANALGESICO_H
#define ANALGESICO_H

#include "medicamento.h"

class Analgesico : public Medicamento {
private:
    // Atributos
    int diasHastaCaducar;

public:
    // Constructor por defecto
    Analgesico();

    // Constructor parametrizado
    Analgesico(const string& codigoReferencia, int unidadesStock, int diasHastaCaducar);

    // Destructor
    ~Analgesico() = default;

    // Getters
    int getDiasHastaCaducar() const;

    // Setters
    void setDiasHastaCaducar(int diasHastaCaducar);

    // Método virtual puro
    string evaluarCaducidad() override;

};

#endif // ANALGESICO_H
