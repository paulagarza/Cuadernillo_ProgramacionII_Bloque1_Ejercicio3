#include "medicamento.h"

// Constructor por defecto
Medicamento::Medicamento() : codigoReferencia("XXX-XXX-XX"), unidadesStock(1) {

}

// Constructor parametrizado
Medicamento::Medicamento(const string& codigoReferencia, int unidadesStock) : codigoReferencia(codigoReferencia), unidadesStock(unidadesStock) {

}

// Getters
string Medicamento::getCodigoReferencia() const {
    return codigoReferencia;
}

int Medicamento::getUnidadesStock() const {
    return unidadesStock;
}

// Setters
void Medicamento::setCodigoReferencia(const string& codigoReferencia) {
    this->codigoReferencia = codigoReferencia;
}

void Medicamento::setUnidadesStock(int unidadesStock) {
    this->unidadesStock = unidadesStock;
}

