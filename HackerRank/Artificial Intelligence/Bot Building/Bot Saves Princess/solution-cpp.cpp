#include <iostream>
#include <vector>
using namespace std;

int main() {

    int m;
    vector <string> grid;
    int i, j, postMi, postMj, postPi, postPj;
    string s; 
    cin >> m;
    for(i=0; i<m; i++) {
        cin >> s;
        grid.push_back(s);
    }
    
    for(i = 0; i < m; i++){
        for(j = 0; j < m; j++) {
            if(grid[i][j]=='m') {
                postMi = i;
                postMj = j;
            }
            if(grid[i][j]=='p'){
                postPi = i;
                postPj = j;
            }
        }
    }
   int jarak = abs(postMi-postPi) + abs(postMj-postPj);

   for(i = 0; i < jarak; i++) {
       if(postMi - postPi < 0) {
           cout << "DOWN\n";
           postMi++;
       } else if(postMi - postPi > 0) {
           cout << "UP\n";
           postMi--;
       } else if(postMj - postPj > 0) {
           cout << "LEFT\n";
           postMj--;
       } else {
           cout << "RIGHT\n";
           postMj++;
       }
   }

    return 0;
}

