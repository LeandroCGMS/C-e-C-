#include <iostream>
#include <locale.h>
#include <stdlib.h>
#include <windows.h>

using namespace std;
void contador(int num, int cont=0);
int main(){
    setlocale(LC_ALL,"Portuguese");
    contador(20,0);
    return 0;
}

void contador(int num, int cont){

    cout << cont << "\n";
    if(num > cont){
        contador(num,++cont);
    }

}
