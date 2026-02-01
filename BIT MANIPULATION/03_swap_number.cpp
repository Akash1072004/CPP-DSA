#include <bits/stdc++.h>
using namespace std;
int main(){
    int a = 6;
    int b = 8;
    cout << a << " " << b << endl;
    a = a ^ b;
    b = b ^ a; // by XOR operation we can swap any two operation without using any extra variable ...
    a = a ^ b;
    cout << a << " " << b;
}