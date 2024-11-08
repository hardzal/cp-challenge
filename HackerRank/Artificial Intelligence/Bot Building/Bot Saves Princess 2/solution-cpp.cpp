#include <iostream>
#include <vector>
using namespace std;
void nextMove(int n, int r, int c, vector <string> grid){
    //your logic here
    int i, j, pI, pJ;
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            if(grid[i][j]=='p') {
                pI = i;
                pJ = j;
            }
        }
    }
    
    if(r - pI < 0) {
        cout << "DOWN\n";
    } else if(r - pI > 0) {
        cout << "UP\n";
    } else if(c - pJ < 0) {
        cout << "RIGHT\n";
    } else {
        cout << "LEFT\n";
    }
    
}
int main(void) {

    int n, r, c;
    vector <string> grid;
    string s; 
    cin >> n;
    cin >> r;
    cin >> c;
    
    for(int i=0; i<n; i++) {
        cin >> s;
        grid.push_back(s);
    }

    nextMove(n, r, c, grid);
    return 0;
}

