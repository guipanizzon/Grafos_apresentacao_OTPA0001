#include <iostream>
using namespace std;

int main(){
    int vertices, arestas;
    cin >> vertices >> arestas;
    int v1, v2;
    int myGraph[vertices+1][vertices+1];
    for(int i=1; i<=vertices; i++){
        for(int j=1; j<=vertices; j++){
            myGraph[i][j]=0;
        }
    }

    for(int i=1; i<=arestas; i++){
        cin >> v1 >> v2;
        if(v1>0 && v1<=vertices && v2>0 && v2<=vertices){
            myGraph[v1][v2]=1;
            myGraph[v2][v1]=1;
        }
    }
    for(int i=1; i<=vertices; i++){
        for(int j=1; j<=vertices; j++){
            cout << myGraph[i][j];
        }
        cout << endl;
    }
    return 0;
}
