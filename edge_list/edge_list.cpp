#include <iostream>
#include <queue>
#include <vector>
#include <utility>
using namespace std;
typedef pair<int, int> ii;




int main(){

    int vertices, arestas;
    cin >> vertices >> arestas;
    int v1, v2;
    priority_queue<pair<int, ii>> EdgeList;
    for(int i=1; i<=arestas; i++){
        cin >> v1 >> v2;
        EdgeList.push(make_pair(v1, make_pair(v2,0)));
    }

    priority_queue<pair<int, ii>> tmp = EdgeList;
    while(!tmp.empty()){
        cout << tmp.top().first << " <-> ";
        const auto& pair = tmp;
        const auto& pair2 = pair.top().second;
        cout << pair2.first << endl; /*<<"("<<  pair2.second << ")" << endl;*/

        tmp.pop();
    }




/*
    vector<vector<pair<int,int>>> myEdgeList(vertices+1);

    for(int i=1; i<=arestas; i++){
        cin >> v1 >> v2;
        myEdgeList[v1].push_back(make_pair(v2, 0));
    }




    for (vector<vector<pair<int,int> > >::iterator it = myEdgeList.begin(); it != myEdgeList.end(); ++it) {
        v_temp = *it;
        for (vector<pair<int,int> >::iterator it2 = v_temp.begin(); it2 != v_temp.end(); ++it2) {
            apair = *it2;
            cout  << apair.first << endl;
        }
    }





    for(int i=1; i<=arestas; ++i){
    cin >> v1 >> v2;
    myEdgeList[v1].push(make_pair(v2,0));
}

priority_queue<ii> temp = myEdgeList;
while(!temp.empty()){
cout << temp.top().first << " <-> " << temp.top().second << endl;
temp.pop();

}*/







return 0;
}
