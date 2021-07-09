#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
string LCS(vector<string> rev){
    string temp = "";  
    for (int i = 0; i < rev.size(); i++)
    {
        for (int j = 0; j < rev.size() - 1; j++)
        {
            if(rev[j][i] != rev[j + 1][i]){
                return temp;
            }
        }
        temp.push_back(rev[0][i]);
    }
    return temp;
}
int main(){
    vector<string>vec;
    vector<string>rev;
    string str;
    string temp;
    string temp2;
    string rtv;

    for (int i = 0; i < 3; i++)
    {
        getline(cin, str);
        vec.push_back(str);
        //cout<< vec[i];
    }
    for (int j = 0; j < vec.size(); j++)
    {
        str = vec[j];
        for (int i = 0; i < str.length() / 2; i++)
        {   
            swap(str[i], str[str.length() - i - 1]);
        }
        rev.push_back(str);
    }
    temp = LCS(rev);
    for (int i = 0; i < temp.length(); i++)
    {
        cout << temp[i];
    }
}