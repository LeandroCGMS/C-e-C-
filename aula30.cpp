#include <iostream>
#include <locale.h>
#include <stdlib.h>
#include <queue>

using namespace std;

int main(){
    setlocale(LC_ALL,"Portuguese");
    queue <string> cartas;
    if(cartas.empty()){
            cout << "Com método empty()\nAté, aqui, fila está vazia.\n\n";
        } else {
            cout << "Com método empty()\nfila com cartas.\n\n";
        }

        if(cartas.size() == 0){
            cout << "Com método size()\nAté, aqui, fila está vazia.\n\n";
        } else {
            cout << "Com método size()\nfila com cartas.\n\n";
        }

        cartas.push("Rei de Copas");
        cartas.push("Rei de Espadas");
        cartas.push("Rei de Ouros");
        cartas.push("Rei de Paus");

        cout << "Tamanho da fila: " << cartas.size() << "\n";
        cout << "Primeira Carta: " << cartas.front() << "\n";
        cout << "Última Carta: " << cartas.back() << "\n";

        while(!cartas.empty()){
            cout << "Primeira Carta: " << cartas.front() << "\n";
            cartas.pop();
        }

    return 0;
}
