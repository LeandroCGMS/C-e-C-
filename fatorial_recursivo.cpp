#include <iostream>
#include <locale.h>
#include <stdlib.h>
#include <windows.h>

using namespace std;
int cont = 1;
int fatorial(int termo);
int main(){
    setlocale(LC_ALL,"Portuguese");
    cout << fatorial(5);
    return 0;
}

int fatorial(int termo){
    if(cont == 1 && termo == 0){
        cout << "0! = ";
        return 1;
    }

    if(termo == 1 && cont == 1){
        cout << " 1! = ";
        return 1;
    }

    if(cont == 1){
        cout << termo << "! = ";
    }

    if(termo > 1){
        cout << termo << " x ";
    }

    if(termo == 0){
            cout << "1 = ";
        return 1;
    }

    cont++;
    return termo * fatorial(termo - 1);

}
