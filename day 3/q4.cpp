#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int m = n + 1;
    int first;
    cin >> first;
    int input[n], result[m];
    for (int i = 0; i < n; i++)
    {
        cin >> input[i];
    }
    result[0] = first;
    for (int i = 0; i < n; i++)
    {
        result[i + 1] = (result[i] ^ input[i]);
        cout<< result[i + 1] <<"\n";
    }
    for (int i = 0; i < n + 1; i++)
    {
        cout << result[i];
    }
    
    
}