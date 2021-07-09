#include<iostream>
#include<algorithm>
#include<vector>
#include<string>

using namespace std;

int main(){
    vector<char>vec;
    string str;
    char temp;
    bool flag = 1;
    getline(cin, str);
    for (int i = 0; i < str.length(); i++)
    {
        if(str[i] == '(' || str[i] == '[' || str[i] == '{')
        {   
            temp = str[i];
            vec.push_back(temp);
        }
        else{
            if(str[i] == ')')
            {
                if(vec.back() == '('){
                    vec.pop_back();
                }
                else{
                    cout<<"\n"<<vec.back();
                    cout<<"false";
                    exit(0);
                }
            }   
            else if(str[i] == '}')
            {
                if(vec.back() == '{'){
                    vec.pop_back();
                }
                else{
                    cout<<"false";
                    exit(0);
                }
            } 
            else if(str[i] == ']')
            {
                if(vec.back() == '['){
                    vec.pop_back();
                }
                else{
                    cout<<"false";
                    exit(0);
                }
            } 
        }
        
    }
    cout<<"true";
    

}