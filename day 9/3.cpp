#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main(){
    string str1;
    string str2;
    string str3;
    getline(cin, str1);
    getline(cin, str2);
    char temp;
    int size1 = str1.length();
    int size2 = str2.length();
    string big;
    string small;
    if(size1 > size2){
        big = str1;
        small = str2;
    }
    else{
        big = size2;
        small = size2;
    }
    int j = 0;
    for (int i = big.length() - 1; i >= 0; i++)
    {   
        if(j > small.length()){
            str3[i] = big[i];
        }else{
            str3[i] = big[i] + small[i];
        }
    }
    

}