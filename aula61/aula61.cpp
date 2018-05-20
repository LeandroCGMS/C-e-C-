#include <iostream>
#include <locale.h>
#include <map>

using namespace std;

int main() {
	setlocale(LC_ALL,"Portuguese");

    map<int,string>prod;
    map<int,string>::iterator itmap;

    prod.insert(pair<int,string>(7,"Mouse"));
    prod.insert(pair<int,string>(5,"Microfone"));
    prod.insert(pair<int,string>(700,"Câmera"));
    prod[1000] = "Teclado";
    prod[21] = "Monitor";
    prod[2] = "Caixa de som";

    prod.erase(prod.begin(),prod.find(700));

    //prod.erase(2);
    //prod.clear();


    /*for( int i = 0; i < prod.size(); i++ ) {
        cout << prod[i] << endl;
    }*/

    /*for( auto it=prod.begin(); it != prod.end(); it++) {
        cout << it->second << endl;
    }*/
    itmap=prod.find(2);
    if(itmap==prod.end()){
        cout << "Produto não encontrado." << endl;
    } else {
        cout << "Produto encontrado." << endl;
        cout << "Código: " << itmap->first << " - Produto: " << itmap->second << "\n\n" << endl;
    }
    for( auto i:prod ) {
        cout << i.first << " - " << i.second << endl;
    }

	return 0;
}
