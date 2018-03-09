#include <iostream>
#include <locale.h>
#include <stdlib.h>
#include <windows.h>

using namespace std;

int main(){
    setlocale(LC_ALL,"Portuguese");
    enum armas{fuzil=100, revolver=8, rifle=12, escopeta=1};

    armas armaSel;

    armaSel = fuzil;

    cout << rifle;
    return 0;
}
