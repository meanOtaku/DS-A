#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
string LCP(vector<string> vec){
    string temp = "";
    for (int i = 0; i < vec.size(); i++)
    {
        for (int j = 0; j < vec.size() - 1; j++)
        {
            if(vec[j][i] != vec[j + 1][i]){
                //cout << "none";
                return temp;
            }
        }
        temp.push_back(vec[0][i]);

    }
    return temp;
}
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
    temp = LCS(vec);
    for (int i = 0; i < temp.length(); i++)
    {
        cout << temp[i];
    }
    
}