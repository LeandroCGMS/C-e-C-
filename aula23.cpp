#include <iostream>
#include <locale.h>
#include <stdlib.h>
#include <windows.h>

using namespace std;
void soma();
void soma(int n1,int n2);
int main(){
    setlocale(LC_ALL,"Portuguese");
    soma();
    soma(50,25);
    return 0;
}

void soma(int n1,int n2){
    int re;
    re = n1+n2;
    cout<<"\nSoma de "<<n1<<" com "<<n2<<" = "<<re;

}

void soma(){
    int n1,n2,re;
    n1=10;
    n2=20;
    re=n1+n2;
    cout<<"\nSoma de "<<n1<<" com "<<n2<<" = "<<re;
}
