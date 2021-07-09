#include<iostream>
#include<vector>
#include<string>
#include<sstream>

using namespace std;

int main(){
    stringstream str, str2;
    char i = '1';
    char j = '1';
    str << i;
    str2 << j;
    int a;
    int b;
    str >> a;
    str2 >> b;
    cout << (a ^ b);
    cout << (a & b);

}