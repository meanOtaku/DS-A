#include<iostream>
#include<vector>
#include<string>

using namespace std;

void swap(char* a, char* b){
    char* temp;
    temp = a;
    a = b;
    b = temp;
}

int main(){
    string str;
    getline(cin, str);
    int i = 0;
    bool flag1 = false;
    bool flag2 = false;
    int j = str.length() - 1;
    while(i < j){
        if(str[i] == 'a' || str[i] == 'A' || str[i] == 'e' || str[i] == 'E' || str[i] == 'o' || str[i] == 'O' || str[i] == 'i' || str[i] == 'I' || str[i] == 'u' || str[i] == 'U'){
            flag1 = true;
        }
        if(str[j] == 'a' || str[j] == 'A' || str[j] == 'e' || str[j] == 'E' || str[j] == 'o' || str[j] == 'O' || str[j] == 'i' || str[j] == 'I' || str[j] == 'u' || str[j] == 'U' ){
            flag2 = true;
        }
        //cout<< str[i] <<" = " << str[j] << "\n";
        if(!flag1){
            i++;
        }
        if(!flag2){
            j--;
        }
        if (flag1 == true && flag2 == true)
        {
            swap(str[i], str[j]);
            j--;
            i++;
            flag1 = false;
            flag2 = false;
        }
    }
    for (int i = 0; i < str.length(); i++)
    {
        cout << str[i];
    }
    
}