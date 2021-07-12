#include<iostream>
#include<vector>
#include<string>
#include<unordered_map>
#include<algorithm>
#include<sstream>
#include <iterator>
using namespace std;
int main(){
    vector<string>vec;
    unordered_map<string, int> umap;
    unordered_map<string, int>::iterator itr;
    string paragraph = {"Bob hit a ball, the hit BALL flew far after it was hit."};
    vector<string> banned = {"hit"};
    transform(paragraph.begin(), paragraph.end(), paragraph.begin(), ::tolower);
    for (int i = 0; i < paragraph.length(); i++)
    {
        if(isalpha(paragraph[i])){
            continue;
        }else{
            paragraph[i] = 32;
        }
    }
    stringstream str(paragraph);
    string word;
    while(str >> word){
        umap[word]++;
    }
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
    int num = INT_MIN;
    string count;
    int flag = 0;
    for (itr = umap.begin(); itr != umap.end(); itr++)
    {
        for (int j = 0; j < banned.size(); j++)
        {
            if((itr->first) == banned[j]){
                flag = 1;
            }
        }
        if(flag == 0){
            if(itr->second > num){
                num = itr->second;
                count = itr->first;
            }
        }else{
            flag = 0;
        }
        
    }
    cout << count;

}