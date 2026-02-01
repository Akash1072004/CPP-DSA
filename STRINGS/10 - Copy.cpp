#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
float s = 0;
float a;
int p(vector<int> &nums1, vector<int> &nums2){
    for (int i = 0; i < nums1.size(); i++){
        int b = nums1[i];
        nums2.push_back(b);
    }
    sort(nums2.begin(),nums2.end());
    for (int i = 0; i < nums2.size(); i++){
        s = s + nums2[i];
    }
    int t =  nums2.size();
    a = s / t;
    return a;
}
int main()
{
    int x, y;
    cout << "enter number of 1st array : ";
    cin >> x;
    cout << "enter the elements\n";
    vector<int> nums1(x);
    for (int i = 0; i < x; i++)
    {
        cin >> nums1[i];
    }
    cout << "enter number of 2nd array : ";
    cin >> y;
    cout << "enter the elements\n";
    vector<int> nums2(y);
    for (int i = 0; i < x; i++)
    {
        cin >> nums2[i];
    }
    p(nums1, nums2);
    cout<<a;
}