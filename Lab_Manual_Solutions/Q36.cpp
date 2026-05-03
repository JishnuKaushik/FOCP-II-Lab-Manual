/* Q36. A machine learning model multiplies matrices for neural network layers. Implement a solution to multiply two matrices of order m×n and p×q (if valid). */

#include <iostream>
using namespace std;

int main() {
    int m, n, p, q;
    cin >> m >> n >> p >> q;

    int a[50][50], b[50][50], c[50][50];

    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    for(int i = 0; i < p; i++) {
        for(int j = 0; j < q; j++) {
            cin >> b[i][j];
        }
    }

    if(n != p) {
        cout << "Not Possible";
        return 0;
    }

    for(int i = 0; i < m; i++) {
        for(int j = 0; j < q; j++) {
            c[i][j] = 0;
            for(int k = 0; k < n; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
            cout << c[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}