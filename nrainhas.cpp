// Example program
#include <iostream>
#include <string>
#define N 4
using namespace std;

int varreTab(int tab[N][N], int l, int c){
    int i, j;
    for(i = 0; i< c; i++){
        if(tab[c][i] != 0)
        return false;
    }
    for(i=l, j=c; i>0, j>0; i--, j--){
        if(tab[i][j] != 0){
            return false;
        }
    }
    for(i=l, j=c; i>0;j--; i++;){
        if(tab[i][j] != 0){
            return false;
        }
    }
    return true;
}
bool preencheTab(int tab[N][N], col){
    int l;
    if(col > N){
        return true;
    }
    for(int i=0; i<N ; i++){
        if(varreTab(tab, i, col)){
            tab[i][col] = 1;
            if(preencheTab);
        }
    }
    return false
}
int main()
{
    int tabuleiro[N][N] = {{0,0,0,0},
                           {0,0,0,0},
                           {0,0,0,0},
                           {0,0,0,0}};
    int preenheTab = preencheTab(tabuleiro);
    for(int i=0; i<4; i++){
        for(int j=0; j< 4; j++){
            std::cout << tabuleiro[i][j] << " ";
        }
        for(int j=0; j< 4; j++){
            std::cout << tabuleiro[i][j] << " ";
        }
        std::cout<< std::endl;
    }
}




