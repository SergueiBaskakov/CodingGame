#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <list>
#include <cmath>


using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/
bool primo(int numero){
    int t = int(sqrt(numero));
    for(int i = 2; i < t; i++){
        if(numero%i==0){
            return false;
        }
    }
    if(numero == 1){
        return false;
    }
    else{
        return true;
    }
}

struct Numero{
    int num = 0;
    int n = 0;
};

list<Numero> listaPrimos(int numero){
    int t = int(numero/2);
    list<Numero> l;
    for (int i = 2; i < t; i++){
        if(numero%i == 0){
            if(primo(i)){
                Numero temp1;
                temp1.num = i;
                temp1.n = temp1.n + 1;
                l.push_back(temp1);
            }
        }
    }
    return l;
}
 
int main(){
    string n;
    string a = "";
    string b = "";
    getline(cin, n);
    string * temp = &a;
    bool frac = 0;
    for(int i = 0; i < n.length(); i++){
        if(n[i] == '/'){
            temp = &b;
            frac = 1;
        }
        else{
            temp->push_back(n[i]);
        }
    }
    int num = stoi(a);
    int den = 0;
    if(frac){ den = stoi(b);}
    

    // Write an action using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;

    cout << num << endl;
}
