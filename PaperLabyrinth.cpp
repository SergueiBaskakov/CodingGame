#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cstdlib>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/
 
int main()
{
    int * pos;
    int xs;
    int ys;
    cin >> xs >> ys; cin.ignore();
    int xr;
    int yr;
    cin >> xr >> yr; cin.ignore();
    int w;
    int h;
    cin >> w >> h; cin.ignore();
    //int lab[h][w];
    vector< vector<int> > lab;
    lab.resize(h);
    
    for (int i = 0; i < h; i++) {
        string l;
        cin >> l; cin.ignore();
        //cout<<l[0]<<endl;
        lab[i].resize(w);
        for(int j = 0; j < l.length(); j++){
            if(l[j] == 'a'){
                lab[i][j] = 10;
            }
            else if(l[j] == 'b'){
                lab[i][j] = 11;
            }
            else if(l[j] == 'c'){
                lab[i][j] = 12;
            }
            else if(l[j] == 'd'){
                lab[i][j] = 13;
            }
            else{
                lab[i][j] = int(l[j])-48;
            }
        }
    }
    
    auto calc_dist = [&lab,](int dist) -> int {
        
        return lab[0][0]+dist;
    };
    

    // Write an action using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;

    cout << calc_dist(0) << endl;
}
