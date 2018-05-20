#include <iostream>
#include <locale.h>
#include <stdlib.h>
#include <stack>

using namespace std;

int main(){
    setlocale(LC_ALL,"Portuguese");

    stack <string> cartas;

    if(cartas.empty()){
        cout << "Com m�todo empty()\nAt�, aqui, pilha est� vazia.\n\n";
    } else {
        cout << "Com m�todo empty()\nPilha com cartas.\n\n";
    }

    if(cartas.size() == 0){
        cout << "Com m�todo size()\nAt�, aqui, pilha est� vazia.\n\n";
    } else {
        cout << "Com m�todo size()\nPilha com cartas.\n\n";
    }

    cartas.push("Rei de Copas");
    cartas.push("Rei de Espadas");
    cartas.push("Rei de Ouros");
    cartas.push("Rei de Paus");

    if(cartas.empty()){
        cout << "Com m�todo empty()\nAt�, aqui, pilha est� vazia.\n\n";
    } else {
        cout << "Com m�todo empty()\nPilha com cartas.\n\n";
    }

    if(cartas.size() == 0){
        cout << "Com m�todo size()\nAt�, aqui, pilha est� vazia.\n\n";
    } else {
        cout << "Com m�todo size()\nPilha com cartas.\n\n";
    }

    while(!cartas.empty()){
        cartas.pop();
    }

    cout << "Tamanho da pilha: " << cartas.size() << "\n";

    cout << "Carta do topo: " << cartas.top() << "\n\n";

    cartas.pop();
    cartas.pop();

    cout << "Novo tamanho da pilha: " << cartas.size() << "\n";
    cout << "Nova carta do topo: " << cartas.top() << "\n";
    return 0;
}
