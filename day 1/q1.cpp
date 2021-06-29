#include<iostream>

using namespace std;

int main (){
    int *a, size;
    int i = 0;
    int j = 0;
    cout << "Enter the size of array: ";
    cin >> size;
    a = new int[size + 1];
    for(i = 0 ; i < size ; i++){
        cin >> a[i];
    }
    a[size + 1] = 0;
    i = 0; 
    j = i+1;
    while(j<=size && i <= size){
        if(a[i] == a[j]){
            a[i+1] = a[j+1];
            j++;
        }else{
            i++;
        }
    }
    for(i = 0 ; i < size ; i++){
        cout << a[i] << " ";
    }
}