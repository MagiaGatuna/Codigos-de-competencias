#include <iostream>
#include <vector>
#include <map> 
#include <string>

using namespace std;

class nodo {
public:
    vector<int> conex;
};

vector<int> componente_id; 
map<int, int> tamano_componente; 

void DFS(int u, vector<nodo>& grafo, int actual_id, int& tamano_actual) {
    
    componente_id[u] = actual_id;
    tamano_actual++; 

    for (int v : grafo[u].conex) {
        if (componente_id[v] == -1) {
            DFS(v, grafo, actual_id, tamano_actual);
        }
    }
}

int main() {
    int n, q, m; 
    cin >> n >> q >> m; 
    
    vector<nodo> grafo(n);

    for (int i = 0; i < q; i++) {
        int x, y;
        cin >> x >> y; 
        
        grafo[x - 1].conex.push_back(y - 1); 
        grafo[y - 1].conex.push_back(x - 1); 
    }

    componente_id.assign(n, -1); 
    int proximo_id = 0; 
    for (int i = 0; i < n; i++) {

        if (componente_id[i] == -1) {
            int tamano_actual = 0;
           
            DFS(i, grafo, proximo_id, tamano_actual);
            tamano_componente[proximo_id] = tamano_actual;
            proximo_id++;
        }
    }

    vector<int> nums;
    for (int i = 0; i < m; i++) {
        int num;
        cin >> num;
        nums.push_back(num - 1); 
    }

    for (int i : nums) {
        cout <<tamano_componente[componente_id[i]] << endl;
    }
    
    return 0;
}
