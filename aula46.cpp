#include <iostream>
#include "classes.h"

using namespace std;

int main() {

    Veiculo *v1 = new Veiculo(1);
    Veiculo *v2 = new Veiculo(2);
    Veiculo *v3 = new Veiculo(3);

    //v1->setLigado(0);
    v2->setLigado(1);
    //v3->setLigado(0);

    cout << v1->getVelMax() << endl;
    cout << v2->getVelMax() << endl;
    cout << v3->getVelMax() << endl;

    if(v1->getLigado()){
        cout << "Veículo 1 está ligado.\n";
    } else {
      cout << "Veículo 1 está desligado.\n";
    }

    if(v2->getLigado()){
        cout << "Veículo 2 está ligado.\n";
    } else {
      cout << "Veículo 2 está desligado.\n";
    }

    if(v3->getLigado()){
        cout << "Veículo 3 está ligado.\n";
    } else {
      cout << "Veículo 3 está desligado.\n";
    }
    return 0;
}
