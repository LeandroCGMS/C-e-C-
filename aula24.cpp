#include <iostream>
#include <locale.h>
#include <stdlib.h>
#include <windows.h>

using namespace std;
void imp(string txt="Bruno");
int main(){
    setlocale(LC_ALL,"Portuguese");
    imp("youtube");
    return 0;
}

void imp(string txt){
    cout << "\n" << txt << "\n";
}
