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
    for(int i = 2; i <= t; i++){
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

list<Numero> listaPrimos(int numerador, int denominador){
    int t = int(max(numerador,denominador)/2);
    list<Numero> l;
    for (int i = 2; i <= t; i++){
        //if(numero%i == 0){
            if(primo(i)){
                Numero temp;
                temp.num = i;
                if(numerador%i==0){
                    int temporal = numerador;
                    int a = 0;
                    while(temporal%i == 0){
                        a++;
                        temporal = temporal/i;
                    }
                    temp.n = temp.n + a;
                }
                if(denominador%i==0 && denominador != 0){
                    int temporal = denominador;
                    int a = 0;
                    while(temporal%i == 0){
                        a++;
                        temporal = temporal/i;
                    }
                    temp.n = temp.n - a;
                }
                l.push_back(temp);
            }
        //}
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
    list<Numero> lNum = listaPrimos(num, den);


    cout << lNum.front().n << endl;
}
