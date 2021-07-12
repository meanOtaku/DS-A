#include<iostream>
#include<vector>
#include<string>
#include<map>
#include<algorithm>
#include<sstream>
#include <iterator>
using namespace std;

int main(){
    vector<string>vec = {"Hello","Alaska","Dad","Peace"};
    vector<string>vec1;
    map<char, int> map1;
    map<char, int>::iterator itr;
    map1['w'] = 1;map1['q'] = 1;map1['e'] = 1;map1['r'] = 1;map1['t'] = 1;map1['u'] = 1;map1['y'] = 1;map1['i'] = 1;
    map1['o'] = 1;map1['p'] = 1;map1['a'] = 2;map1['s'] = 2;map1['d'] = 2;map1['f'] = 2;map1['g'] = 2;map1['h'] = 2;map1['j'] = 2;
    map1['k'] = 2;map1['l'] = 2;map1['z'] = 3;map1['x'] = 3;map1['c'] = 3;map1['v'] = 3;map1['b'] = 3;map1['n'] = 3;map1['m'] = 3;

    
    for (int i = 0; i < vec.size(); i++)
    {
        transform(vec[i].begin(), vec[i].end(), vec[i].begin(), ::tolower);
        string temp = vec[i];
        int flag = 0;
        int flag2 = 0;
        int num;
        for (int j = 0; j < temp.size(); j++)
        {   
            itr = map1.find(temp[j]);
            num = itr->second;
            cout << temp[j] << " " << num << " ";
            if(flag == 0){
                flag = num;
            }
            if(flag != num){
                flag2 = 1;
                flag = 0;
                break;
            }
            else{
                flag = num;
            }
        }
        cout << endl;
        if(flag2 == 0)
            vec1.push_back(temp);
        flag = 0;
    }
    for (int i = 0; i < vec1.size(); i++)
    {
        cout << vec1[i] << " ";
    }
    

}