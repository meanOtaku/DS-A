#include<iostream>
#include<vector>
#include<string>
#include<sstream>

using namespace std;

int main(){
    string str1;
    string str2;
    vector<int>vec;
    stringstream str, strstr;
    getline(cin, str1);
    getline(cin, str2);
    int sum;
    int carry = 0;
    int i = str1.length() - 1;
    int j = str2.length() - 1;
    int a;
    int b;
    while(i >= 0 || j >= 0){
        //cout << str1[i];
        //cout << str2[j];
        str << str1[i];
        str >> a;
        strstr << str2[j];
        strstr >> b;
        cout << a;
        cout << b;
        if(j>=0){
            sum = a ^ b ^ carry;
            carry = a & b;
            cout<< a << b << " =" <<carry << "\n";
        }
        else{
            sum = a ^ carry;
            carry = 0;
        }
        vec.push_back(sum);
        i--;
        j--;
        str.clear();
        strstr.clear();
    }
    if(carry){
        vec.push_back(carry);
    }
    for (int i = vec.size() - 1; i >= 0; i--)
    {
        cout<< vec[i];
    }
    
}