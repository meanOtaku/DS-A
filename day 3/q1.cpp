#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin >> n ;
    int a[n];
    int b[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        b[i] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = n; j > i; j--)
        {
            if(a[i] > a[j]){
                b[i]++;
            }else if(a[i] < a[j]){
                b[j]++;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << b[i];
    }
    
    
}