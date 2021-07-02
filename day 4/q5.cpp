#include<iostream>

using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>> arr[i];
    }
    int max = 0;
    int index;
    for (int i = 0; i < n; i++)
    {
        if(arr[i] > max){
            max = arr[i];
            index = i;
        }
    }
    
    cout << index;
}