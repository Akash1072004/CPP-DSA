#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<sstream>
using namespace std;

int main(){
    int x;
    cin >> x;

    vector<string> v(x);
    for (int i = 0; i < x; i++){
        cin >> v[i];
    }

    for (int i = 0; i < x; i++){
        cout << v[i] << " ";
    }
    cout << endl;

    vector<vector<string>> v1(x);
    
    for (int i = 0; i < x; i++) {
        vector<string> v2; // Declared inside the loop to clear content in each iteration
        string s = v[i];
        for (int j = 0; j < s.size(); j++) {
            string t(1, s[j]);
            v2.push_back(t);
        }
        v1[i] = v2; // Properly assign the inner vector
    }

    for (int i = 0; i < x; i++){
        for (int j = 0; j < v1[i].size(); j++){ // Ensure proper bounds for inner vector
            cout << v1[i][j] << " ";
        }
        cout << endl;
    }
    return 0; // Added return statement at the end of main function
}
