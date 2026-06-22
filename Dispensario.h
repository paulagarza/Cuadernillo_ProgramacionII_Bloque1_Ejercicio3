#ifndef DISPENSARIO_H
#define DISPENSARIO_H

#include <iostream>
#include "medicamento.h"
#include <vector>
#include <memory>

using namespace std;

template <typename T>
class Dispensario {
private:
    // Atributos
    vector<shared_ptr<T>> contenedor;

public:
    // Constructor por defecto
    Dispensario() {

    }

    // Constructor parametrizado
    Dispensario(const vector<shared_ptr<T>>& contenedor) : contenedor(contenedor) {

    }

    // Sobrecarga del operador +
    Dispensario operator+(shared_ptr<T>& o) {
        contenedor.push_back(o);
        return *this;
    }

    // Método calcularStockTotal
    int calcularStockTotal() const {
        if (contenedor.empty()) {
            throw invalid_argument("Error: el contendor está vacio.");
        }

        int suma = 0;

        for (const auto& e : contenedor) {
            suma += e->getUnidadesStock();
        }
        return suma;
    }

    // Sobrecarga del operador ==
    bool operator==(const Dispensario<T>& obj) const  {
        return this->calcularStockTotal() == obj.calcularStockTotal();
    }

};


#endif // DISPENSARIO_H
