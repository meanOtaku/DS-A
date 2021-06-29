#include<iostream>

using namespace std;

int main (){
    int a[10], key;
    for(int i = 0 ; i < 10 ; i++){
        cin >> a[i];
    }
    cin >> key;
    int i = 0, j = 9;
    for (i = 0; i < 9; i++){
        for ( j = 9; j > 0; i--)
        {
            if (a[i] == key)
            {
                if(a[i] == a[j]){
                j--;
                }
                else{
                    
                }
            }
            
        }
        
    }
}