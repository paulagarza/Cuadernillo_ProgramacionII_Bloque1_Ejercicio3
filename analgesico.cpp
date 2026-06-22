#include "analgesico.h"

// Constructor por defecto
Analgesico::Analgesico() {

}

// Constructor parametrizado
Analgesico::Analgesico(const string& codigoReferencia, int unidadesStock, int diasHastaCaducar) : Medicamento(codigoReferencia, unidadesStock), diasHastaCaducar(diasHastaCaducar) {

}

// Getters
int Analgesico::getDiasHastaCaducar() const {
    return diasHastaCaducar;
}

// Setters
void Analgesico::setDiasHastaCaducar(int diasHastaCaducar) {
    this->diasHastaCaducar = diasHastaCaducar;
}

// Método virtual puro
string Analgesico::evaluarCaducidad() {
    if (diasHastaCaducar <= 0) {
        return "Caducado";
    }
    return "Vigente";
}
