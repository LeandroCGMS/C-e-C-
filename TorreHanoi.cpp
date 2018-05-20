#include <iostream>
#include <locale.h>
#include <stdlib.h>

using namespace std;
int cont = 0;
void move_disco(int d, char ori, char dest, char aux){
    if(d==1){
        cont++;
        cout<<"Mover disco "<<d<<" de "<<ori<<" para "<<dest << " Movimento: " << cont << "º"<<endl;
    } else {
        move_disco(d-1,ori,aux,dest);
        cont++;
        cout<<"Mover disco "<<d<<" de "<<ori<<" para "<<dest<< " Movimento: " << cont << "º"<<endl;
        move_disco(d-1,aux,dest,ori);
    }

}

int main(){
    setlocale(LC_ALL,"Portuguese");
    int discos = 4;

    move_disco(discos, 'A','C', 'B');
    return 0;
}
