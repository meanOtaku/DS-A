#include<iostream>
#include<map>
using namespace std;


int main(){
    int n;
    int m;
    map<int, int>maparr;
    cin >> n;
    cin >> m;
    int a[n][m];
    int hospital[n];
    int index[n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
        
    }
    int k = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(a[j][i] == 0){
                hospital[k] = j;
                k++;
            }
        }
    } 
    for (int i = 0; i < n; i++)
    {
        cout << hospital[i] << " ";
    }
    
    
}