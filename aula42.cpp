#include <iostream>
#include <locale.h>
#include <stdlib.h>
#include <vector>
using namespace std;

int main(){
    setlocale(LC_ALL,"Portuguese");
    vector<int> num1;
    vector<int> num2;
    int tam1, tam2, i;
    num1.push_back(1);num1.push_back(2);num1.push_back(3);num1.push_back(4);num1.push_back(5);

    num2.push_back(6);num2.push_back(7);num2.push_back(8);num2.push_back(9);num2.push_back(10);
    num1.insert(num1.end()-1,777);
    num1.erase(num1.end()-2);

    tam1 = num1.size();
    tam2 = num2.size();
    //num1.swap(num2);
    cout<<"Primeiro valor de num1: "<<num1.front();
    cout<<"\nÚltimo valor de num1: "<<num1.back();
    cout<<"\nValor do meio.......: "<<num1.at(tam1/2);

    tam1 = num1.size();

    cout << "\n\nTamanho do vector num1: "<<tam1 << endl;

    for(int i = 0; i < tam1; i++){
        cout << num1[i] << " ";
    }
    cout << endl;
    for(int i = 0; i < tam2; i++){
        cout << num2[i] << " ";
    }

    while(!num1.empty()){
        num1.pop_back();
    }
    num2.clear();
    cout << "\n\n\nNovo tamamnho de num1: " << num1.size();
    cout << "\n\n\nNovo tamamnho de num2: " << num2.size();
    return 0;
}
