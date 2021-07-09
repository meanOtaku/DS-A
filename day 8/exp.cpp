#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
int main(){
    vector<string>vec;
    string str;
    string temp;
    string rtv;

    for (int i = 0; i < 3; i++)
    {
        getline(cin, str);
        vec.push_back(str);
        //cout<< vec[i];
    }
    for (int i = vec[0].size() - 1; i >= 0; i--)
    {
        cout<<vec[0][i];
    }
    
}