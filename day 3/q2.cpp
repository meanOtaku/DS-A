#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    int temp;
    cin >> n;
    int arr[n];
    char cha[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> cha[arr[i]];
    }
    for (int i = 0; i < n; i++)
    {
        cout << cha[i] << " ";
    }
}