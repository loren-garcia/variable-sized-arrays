#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    
    int n, q, i, j, *aux, k;
    int **a;
    int **queries;
    
    cin >> n >> q;
    
    a = (int **)malloc(n * sizeof(int *));
    aux = (int *)malloc(n * sizeof(int));
    
    for(i = 0; i < n; i++){
        cin >> aux[i];
        k = aux[i];
        a[i] = (int *)malloc(k * sizeof(int));
        for(j = 0; j < k; j++){
            cin >> a[i][j];
        }
    }
    
    /*for(i = 0; i < n; i++){
        k = aux[i];
        for(j = 0; j < k; j++){
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }*/
    
    queries = (int **)malloc(q * sizeof(int *));
    for(i = 0; i < q; i++){
        queries[i] = (int *)malloc(2 * sizeof(int));
        for(j = 0; j < 2; j++){
            cin >> queries[i][j];
        }
    }
    
    for(i = 0; i < q; i++){
        k = aux[i];
        for(j = 0; j < 2; j++){
            cout << queries[i][j] << " ";
        }
        cout << "\n";
    }
    
    for(i = 0; i < q; i++){
        cout << a[queries[i][0]][queries[i][1]] << "\n";
    }
    
    return 0;
}
