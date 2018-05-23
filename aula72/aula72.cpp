#include <iostream>

using namespace std;

int main(){
    setlocale(LC_ALL,"Portuguese");
    int idade;
    //string nome;
    char nome[80];

    //cin >> nome >> idade;
    //cin.getline(nome,80);
    char n,s;
    n=cin.get();
    cin.ignore(80,' ');
    s=cin.get();

    //cout << nome << "-" << idade << " - CFB Cursos" << endl;
    cout << n << " - " << s << endl;
    return 0;
}
