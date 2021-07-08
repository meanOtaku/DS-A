#include<iostream>

using namespace std;

int main(){
    int n;
    int m;
    cin >> n;
    cin >> m;
    int a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
        
    }
    int min = a[0][0];
    int max = 0;
    int k;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(a[i][j] < min){
                min = a[i][j];
                k = j;
            }     
        }
        for (int j = 0; j < m; j++)
        {
            if(a[j][k] > max){
                max = a[j][k];
            }     
        }
        if(min == max)
            {cout << max;
            break;}
    }
    
}

/* 3 7 8 
   9 11 13
   15 16 17*/