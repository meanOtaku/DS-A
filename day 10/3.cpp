#include<iostream>
#include<map>
#include<string>

using namespace std;

int main(){
    string str, str2;
    getline(cin, str);
    getline(cin, str2);
    int arr[25] = {0};

    for (int i = 0; i < str.length(); i++)
    {
        arr[str[i] -'a']++;
    }
    for (int i = 0; i < str.length(); i++)
    {
        arr[str2[i] -'a']--;
        if(arr[str2[i] -'a'] == -1){
            cout<<"false";
            exit(0);
        }
    }
    
    cout<<"true";
}