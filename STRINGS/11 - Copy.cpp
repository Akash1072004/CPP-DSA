#include<iostream>
#include<vector>
using namespace std;

float s = 0;
float a; // Changed to float for division result

int p(vector<int>& nums1, vector<int>& nums2) {
     for (int i = 0; i < nums1.size(); i++) {
        int b = nums1[i];
        nums2.push_back(b);
    }
    for (int i = 0; i < nums2.size(); i++) {
        s=s+nums2[i];
    }
    int t = nums2.size();
    a = s / t ;
    return a;
}

int main() {
    int x, y;
    cout << "enter number of 1st array: ";
    cin >> x;
    cout << "enter the elements\n";
    vector<int> nums1(x);
    for (int i = 0; i < x; i++) {
        cin >> nums1[i];
    }

    cout << "enter number of 2nd array: ";
    cin >> y;
    cout << "enter the elements\n";
    vector<int> nums2(y);
    for (int i = 0; i < y; i++) {  // Fixed the loop to iterate over y
        cin >> nums2[i];
    }

     p(nums1, nums2); // Assign the result to a
    cout << a;
}
