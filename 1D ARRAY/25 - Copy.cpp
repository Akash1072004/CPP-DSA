#include <iostream>
#include <vector>
using namespace std;
int x;
void rain(vector<int> &arr)
{
    vector<int> arr1(x);
    arr1[0]=-1;
    int max = arr[0];
    for (int i = 1; i < x; i++)
    {
        arr1[i] = max;
        if (max < arr[i]) max = arr[i];
    }
    for (int i = 0; i < x; i++)
    {
        cout << arr1[i] << " ";
    }
    cout<<endl;
     vector<int> arr2(x);
    arr2[x-1]=-1;
      int max1 = arr[x-1];
    for (int i = x-2; i >= 0; i--)
    {
        arr2[i] = max1;
        if (max1 < arr[i]) max1 = arr[i];
    }
    for (int i = 0; i < x; i++)
    {
        cout << arr2[i] << " ";
    }
    cout<<endl;
    vector<int> arr3(x);
    for(int i=0;i<x;i++){
        if(arr1[i]<arr2[i])arr3[i]=arr1[i];
        else arr3[i]=arr2[i];
    }
     for (int i = 0; i < x; i++)
    {
        cout << arr3[i] << " ";
    }
    cout<<endl;
    int b,c=0;
    for(int i=0;i<x;i++){
        if(arr3[i]>arr[i])b=arr3[i]-arr[i];
        else continue;
        c=c+b;
    } 
    cout<<"total number of blocks of water is "<<c;
}
int main()
{
    cin>>x;
    vector<int> arr(x);
    for (int i = 0; i < x; i++)
    {
        cin >> arr[i];
    }
    rain(arr);
}