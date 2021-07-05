#include<iostream>

using namespace std;
void swap(int* a, int* b){
    int* temp;
    temp = a;
    a = b;
    b = temp;
}

int main(){
    int n;
    cin >> n;
    int rot;
    cin >> rot;
    int a[n][n];
    int i;
    int j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    
    int temp ;
    for (int k = 0; k < rot; k++)
    {
        i = 0;
        j = 0;
        temp = a[i][j];
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                temp = a[0][0];
                swap(a[0][0], a[i][j]);
            }
        }
        if(i == n)
            i = 0;
        if(j == n)
            j = 0;
    }
    
    for (int i = 0; i < n; i++)
    {
        cout << "\n";
        for (int j = 0; j < n; j++)
        {   
            
            cout << a[i][j] << " ";
        }
    }
    
}