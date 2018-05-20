// for range declaration
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int x[10]{0,1,2,3,4,5,6,7,8,9};
    vector<int>n{10,20,30,40,50,60,70,80,90,100};

    //string nome = "Bruno";
    const char* nome = "Bruno"; //não dá certo com esse for range declaration

    for(int i = 0; i < sizeof(x) / 4; i++ ) {
        cout << nome[i] << endl;
    }
    cout << "------------------------------------------------" << endl;
    for(int i : x) {
        cout << i << endl;
    }
    cout << "------------------------------------------------" << endl;
    for(auto i: n) {
        cout << i << endl;
    }

    return 0;
}
