#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string str;
    getline(cin, str);
    int i =0;
    int j = str.length() - 1;
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    while(i < j){
        if(str[i] >= 0 && str[i] <= 47 || str[i] >= 58 && str[i] <= 64 || str[i] >= 91 && str[i] <= 96 || str[i] >= 123 && str[i] <= 127){
            i++;
        }
        if(str[j] >= 0 && str[j] <= 47 || str[j] >= 58 && str[j] <= 64 || str[j] >= 91 && str[j] <= 96 || str[j] >= 123 && str[j] <= 127){
            j--;
        }
        cout<< str[i] <<" = " << str[j] << "\n";
        if (str[i] != str[j])
        {
            cout << "false";
            exit(0);
        }
        i++;
        j--;
        
    }
    cout << "true";
}