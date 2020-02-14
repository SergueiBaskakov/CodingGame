#include <iostream>
#include <string>
#include <vector>
#include <algorithm>


using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
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
    if(frac){ int den = stoi(b);}
    

    // Write an action using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;

    cout << num << endl;
}
