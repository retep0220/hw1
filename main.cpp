//
//  main.cpp
//  hw1
//
//  Created by 王吉朗 on 2023/3/11.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    int a = 0, big = 0;
    a = *argv[1] - 48;
    for (int i = 0; i <= a; i++) {
        cout << "(" << i << "," << a-i << ")\n";
        if ((a - i) * i > big) {
            big = (a - i) * i;
        }
    }
    cout << big << endl;
    return 0;
}
