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
    int xs;
    int ys;
    cin >> xs >> ys; cin.ignore();
    int xr;
    int yr;
    cin >> xr >> yr; cin.ignore();
    int w;
    int h;
    cin >> w >> h; cin.ignore();
    struct casilla{
        int valor;
        bool acceso = 1;
    };
    vector< vector<casilla> > lab;
    lab.resize(h);
    
    for (int i = 0; i < h; i++) {
        string l;
        cin >> l; cin.ignore();
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
            else if(l[j] == 'e'){
                lab[i][j].valor = 14;
            }
            else if(l[j] == 'f'){
                lab[i][j].valor = 15;
            }
            else{
                lab[i][j].valor = int(l[j])-48;
            }
        }
    }
        int distancia = -1;
        auto calc_dist = [&distancia](int posX, int posY, int dist, int finX, int finY, auto& calc_dist, auto* lab) -> void {
            if(posX == finX && posY == finY){
                if(dist < distancia || distancia == -1){
                    distancia = dist;
                    return;
                }
            }
            int val = (*lab)[posX][posY].valor;
            bool fin = 1;
            (*lab)[posX][posY].acceso=0;
            if(posX != finX || posY != finY){
                if(val<8){
                    if((*lab)[posX][posY+1].acceso==1){
                        calc_dist(posX, posY+1,dist+1,finX,finY,calc_dist,lab);
                        fin = 0;
                    }
                }
                else{
                    val = val - 8;
                }
                if(val<4){
                    if((*lab)[posX-1][posY].acceso==1){
                        calc_dist(posX-1, posY,dist+1,finX,finY,calc_dist,lab);
                        fin = 0;
                    }
                }
                else{
                    val = val - 4;
                }
                if(val<2){
                    if((*lab)[posX][posY-1].acceso==1){
                        calc_dist(posX, posY-1,dist+1,finX,finY,calc_dist,lab);
                        fin = 0;
                    }
                }
                else{
                    val = val - 2;
                }
                if(val<1){
                    if((*lab)[posX+1][posY].acceso==1){
                        calc_dist(posX+1, posY,dist+1,finX,finY,calc_dist,lab);
                        fin = 0;
                    }
                }
            }
            
            (*lab)[posX][posY].acceso=1;
            
            
        };
        calc_dist(ys,xs,0,yr,xr,calc_dist,&lab);
        int dist1 = distancia ;
        distancia = -1;
        calc_dist(yr,xr,0,ys,xs,calc_dist,&lab);
        int dist2 = distancia;
        cout << dist1 << " " << dist2 << endl;
    //};
    
   // respuesta();
    // Write an action using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;

    //cout << respuesta() << endl;
}
