#include<iostream>

using namespace std;

int  main(){
    int n;
    cin >> n;
    int a[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int  j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
        
    }
    int temp[n];
    for (int i = 0; i < n; i++)
    {
        int k = n;
        for (int  j = 0; j < n; j++)
        {
            temp[k] = a[i][j];
            if(temp[k] == 0){
                temp[k] = 1;
            }
            else{
                temp[k] = 0;
            }
            k--;
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        for (int  j = 0; j < n; j++)
        {
            cout << a[i][j] << " ";
        }
        cout<<"\n";
    }
    
}