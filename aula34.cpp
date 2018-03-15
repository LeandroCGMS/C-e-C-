#include <iostream>
#include <locale.h>
#include <stdlib.h>

using namespace std;

struct Carro{
    string nome;
    string cor;
    int pot;
    int velMax;
    int vel = 0;

    void insere(string stnome, string stcor, int stpot, int stvelmax){
        nome = stnome;
        cor = stcor;
        pot = stpot;
        velMax = stvelmax;
    }

    void mostra(){
        cout << "Nome.............: " << nome << "\n";
        cout << "Cor..............: " << cor << "\n";
        cout << "Potência.........: " << pot << "\n";
        cout << "Velocidade atual.: " << vel << "\n";
        cout << "Velocidade Máxima: " << velMax << "\n\n";
    }

    void mudavel(int mv) {
        vel = mv;
        if(vel > velMax) {
            vel = velMax;
        }
        if(vel < 0) {
            vel = 0;
        }
    }
};

int main(){
    setlocale(LC_ALL,"Portuguese");

    Carro car1,car2,car3,car4;

    car1.insere("Tornado","Vermelho",450,350);
    car2.insere("Luxo","Preto",250,260);
    car2.insere("Tornado","Vermelho",450,350);
    car4.insere("Tornado","Vermelho",450,350);

    car1.mudavel(400);
    car1.mostra();

    car2.mostra();





    return 0;
}
