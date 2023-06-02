#include <iostream>
#include <vector>
int mult(int a, int b) {
    return a * b;
}

#define a +

using namespace std;
int main(int argc, const char * argv[]) {
    
//    int a = 7, b = 2;
    vector < vector <string>> intVector = {{"", "" ,""}, {"", "", ""}, {"", "", ""}};

    string x1, x2, x3;
    for (int i = 0; i < 3; i++) {
        cin >> x1 >> x2 >> x3;
        intVector[i][0] = x1;
        intVector[i][1] = x2;
        intVector[i][2] = x3;
    }
    
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << intVector[i][j];
        }
        cout << "\n";
    }
    cout << "Hello, World!\n" << 1 a 3 << endl;
    return 0;
}
