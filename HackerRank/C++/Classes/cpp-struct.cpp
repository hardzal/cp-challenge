#include <cmath>
#include <cstdio>
// https://www.hackerrank.com/challenges/c-tutorial-struct/
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*
    add code for struct here.
*/
typedef struct {
    int age, standard;
    string first_name, last_name;
} Student;

int main() {
    Student st;
    
    cin >> st.age >> st.first_name >> st.last_name >> st.standard;
    cout << st.age << " " << st.first_name << " " << st.last_name << " " << st.standard;
    
    return 0;
}

