#include<iostream>

using namespace std;

int main(){
    int n, m;
    cin >> n;
    cin >> m;
    int a[n][m];
    bool flag = true;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(i+1 < n && j+1 < m){
                if(a[i][j] != a[i+1][j+1]){
                    flag = false;
                    break;
                }
            }
        }
        
    }
    if(flag == true){
        cout<<"Special";
    }else{
        cout<<"Not Special";
    }
    
}