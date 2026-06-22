#include <iostream>

#include "Dispensario.h"
#include "medicamento.h"
#include "analgesico.h"
using namespace std;

int main() {
    try {
        Dispensario<Medicamento> disp1;
        Dispensario<Medicamento> disp2;

        shared_ptr<Medicamento> med1 = make_shared<Analgesico> ("XXX-001-XX", 40, 2);
        shared_ptr<Medicamento> med2 = make_shared<Analgesico> ("XXX-002-XX", 60, 3);
        shared_ptr<Medicamento> med3 = make_shared<Analgesico> ("XXX-003-XX", 50, 1);
        shared_ptr<Medicamento> med4 = make_shared<Analgesico> ("XXX-004-XX", 50, 0);

        disp1 + med1;
        disp1 + med2;

        disp2 + med3;
        disp2 + med4;

        cout << "Stock total dispensario 1: " << disp1.calcularStockTotal() << endl;
        cout << "Stock total dispensario 2: " << disp2.calcularStockTotal() << endl;

        if (disp1 == disp2) {
            cout << "Los dispensarios son equivalentes en capacidad de stock." << endl;
        } else {
            cout << "Los dispensarios NO son equivalentes en capacidad de stock." << endl;
        }


    } catch (const exception& e) {
        cout << e.what();
    }
    return 0;
}
