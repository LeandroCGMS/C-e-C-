#include <iostream>
#include <locale.h>
#include <utility>
#include <vector>

using namespace std;

int main() {
	setlocale(LC_ALL,"Portuguese");

    vector<pair<int,string>>prod;
    prod.push_back(make_pair(10,"mouse"));
    prod.push_back(make_pair(20,"teclado"));
    prod.push_back(make_pair(30,"monitor"));
    /*const int tam = 3;
    pair<int,pair<string,double>> par[tam];
    par[0] = make_pair(10,make_pair("mouse",10.55));
    par[1] = make_pair(20,make_pair("teclado",50.49));
    par[2] = make_pair(30,make_pair("monitor",399.98));*/

    /*for(int i = 0; i < prod.size(); i++) {
        cout << prod[i].first << " - " << prod[i].second << endl;
    }*/

    for(auto i: prod) {
        cout << i.first << " - " << i.second << endl;
    }



	return 0;
}
