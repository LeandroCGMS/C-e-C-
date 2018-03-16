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
        cout << "Pot�ncia.........: " << pot << "\n";
        cout << "Velocidade atual.: " << vel << "\n";
        cout << "Velocidade M�xima: " << velMax << "\n\n";
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

    Carro *carros = new Carro[5];

    Carro car1,car2,car3,car4,car5;

    carros[0] = car1; carros[1] = car2; carros[2] = car3; carros[3] = car4; carros[4] = car5;

    carros[0].insere("Tornado","Vermelho",450,350);
    carros[1].insere("Luxo","Preto",250,260);
    carros[2].insere("Familia","Prata",150,180);
    carros[3].insere("Trabalho","Branco",80,120);
    carros[4].insere("Padr�o","Cinza",100,150);

    for(int i=0; i < 5; i++){
        carros[i].mostra();
    }






    return 0;
}