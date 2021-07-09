#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str1;
    string str2;
    string str3;
    vector<int>vec;
    getline(cin, str1);
    getline(cin, str2);
    string strsmall;
    string strbig;
    int count = 0;
    if(str1.length() <= str2.length()){
        strsmall = str1;
        strbig = str2;
    }
    else{
        strsmall = str2;
        strbig = str1;
    }
    for (int i = 0;; )
    {
        for (int j = 0; j < strbig.length(); j++)
        {
            if(strsmall[i] == strbig[j]){
                count++;
                i++;
            }
            else{
                vec.push_back(count);
                count = 0;
                i = 0;
            }
        }
        
        break;
    }
    sort(vec.begin(), vec.end(), greater<int>());
    for (int i = 0; i < vec[0] ; i++)
    {
        cout << strsmall[i];
    }
}