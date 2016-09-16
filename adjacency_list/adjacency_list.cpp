#include <iostream>
#include <vector>
#include <list>
using namespace std;

typedef pair<int, int> ii;
typedef list<ii> vii;
int main(){
    int vertices, arestas, weight;
    cin >> vertices >> arestas;
    vector<vii> myGraph(arestas);
    int v1, v2;
    for(int i=1; i<=arestas; ++i){
        cin >> v1 >> v2;
        myGraph[v1].push_back(make_pair(v2, 0));
        myGraph[v2].push_back(make_pair(v1, 0));
    }



    // Printing Adjacency List
    for (int i = 1; i < myGraph.size(); ++i) {
        cout << i;
        list< pair<int, int> >::iterator itr = myGraph[i].begin();

        while (itr != myGraph[i].end()) {
            cout << " -> " << (*itr).first;
            ++itr;
        }
        cout << endl;
    }




    return 0;
}
