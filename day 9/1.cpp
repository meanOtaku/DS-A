#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main(){
    string str;
    int i = 0;
    vector<int>vec;
    getline(cin, str);
    while(i < str.length()){
        switch (str[i])
        {
        case 'I':
            vec.push_back(1);
            break;
        case 'V':
            vec.push_back(5);
            break;
        case 'X':
            vec.push_back(10);
            break;
        case 'L':
            vec.push_back(50);
            break;
        case 'C':
            vec.push_back(100);
            break;
        case 'D':
            vec.push_back(500);
            break;
        case 'M':
            vec.push_back(1000);
            break;
        
        default:
        cout << "Invalid string";
            break;
        }
        i++;
    }
    int temp = vec.size();
    int sum = vec[temp - 1];
    for (int j = vec.size() - 1; j > 0; j--)
    {
        if(vec[j] <= vec[j - 1]){
            sum = sum + vec[j - 1];
        }
        else if(vec[j] > vec[j - 1]){
            sum = abs(sum - vec[j - 1]);
        }
        cout << vec[j - 1] << "-" << sum << "\n";
    }
    cout << sum;
    

}