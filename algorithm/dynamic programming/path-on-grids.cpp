#include <iostream>
#define endl '\n'
using namespace std;
const int N = 1005;
int square[N][N];
int maxS[N][N];     // save the 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            cin >> square[i][j];
        }
    }
    for(int i = 0; i <= n; i++) {
        maxS[0][i] = 0;
        maxS[i][0] = 0;
    }
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            maxS[i][j] = max(maxS[i][j-1], maxS[i-1][j]) + square[i][j];   // left, up
        }
    }
    cout << maxS[n][n] << endl;
    return 0;
}