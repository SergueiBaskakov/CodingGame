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
    //int * pos;
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
    struct casilla{
        int valor;
        bool acceso = 1;
    };
    vector< vector<casilla> > lab;
    lab.resize(h);
    
    for (int i = 0; i < h; i++) {
        string l;
        cin >> l; cin.ignore();
        //cout<<l[0]<<endl;
        lab[i].resize(w);
        for(int j = 0; j < l.length(); j++){
            if(l[j] == 'a'){
                lab[i][j].valor = 10;
            }
            else if(l[j] == 'b'){
                lab[i][j].valor = 11;
            }
            else if(l[j] == 'c'){
                lab[i][j].valor = 12;
            }
            else if(l[j] == 'd'){
                lab[i][j].valor = 13;
            }
            else{
                lab[i][j].valor = int(l[j])-48;
            }
        }
    }
    
    function<string()> respuesta = [&lab]() -> string {
        int distancia = -1;
        function<int(int)> calc_dist = [&lab](int posX, int posY, int dist) -> int {
            int val = lab[posX][posY];
            bool fin = 1;
            lab[posX][posY].acceso=0;
            if(val<8 && lab[posX][posY+1].acceso==1){
                calc_dist(posX, posY+1,dist+1);
                fin = 0;
            }
            if(val-8<4 && lab[posX+1][posY].acceso==1){
                calc_dist(posX+1, posY,dist+1);
                fin = 0;
            }
            if(val-12<2 && lab[posX][posY-1].acceso==1){
                calc_dist(posX, posY-1,dist+1);
                fin = 0;
            }
            if(val-14<1 && lab[posX-1][posY].acceso==1){
                calc_dist(posX-1, posY,dist+1);
                fin = 0;
            }
            
            if(fin==1){
            }
            else{
            }
            
            return 0;
        };
        return "none";
    };
    

    // Write an action using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;

    cout << respuesta() << endl;
}
