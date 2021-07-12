#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    string str = {"loveleetcode"};
    char c = 'e';
    vector<int>output, vec;
    int i;
    int j;
    int k;
    for (int i = 0; i < str.length(); i++)
    {
        if(str[i] == c){
            vec.push_back(i);
        }
    }
    int position;
    i = 0;
    k = 1;
    for (int j = 0; j < str.length(); j++)
    {
        position = min(abs(j-vec[i]), abs(j-vec[k]));
        cout << j-vec[i];
        cout << endl;
        output.push_back(position);
        if(j==vec[k] && vec[k] <= str.length()){
            i++;
            k++;
        }
    }
    for (int i = 0; i < output.size(); i++)
    {
        cout << output[i] << " ";
    }
    
}