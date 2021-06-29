#include<iostream>

using namespace std;

int main (){
    int *a, size, key;
    int i = 0;
    int j = 0;
    int k;
    cout << "Enter the size of array: ";
    cin >> size;
    a = new int[size + 1];
    for(i = 0 ; i < size ; i++){
        cin >> a[i];
    }
    cout << "Enter the key: ";
    cin >> key;
    k = size - 1;
    for(i = 0; i < size; i++){
        if(a[i] == key){
            for(j = i + 1; j < size ; j++){
                if(a[j] == key){
                    while(a[k] == key){
                        k--;
                    }
                    a[j] = a[k];
                }
            }
        }
    }
    for(i = 0 ; i < size ; i++){
        cout << a[i];
    }
}