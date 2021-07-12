#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<char>vec = {'A' ,'B' ,'C' ,'D' ,'E' ,'F' ,'G' ,'H' ,'I' ,'J' ,'K' ,'L' ,'M' ,'N' ,'O' ,'P' ,'Q' ,'R' ,'S' ,'T' ,'U' ,'V' ,'W' ,'X' ,'Y' ,'Z'};
    vector<char>vec2;
    int n;
    char temp;
    cin >> n;
    while(n>0)
    {
        //cout << "here";
        if(n<= 26){
            temp = vec[n-1];
            vec2.push_back(temp);
            cout << temp << "\n";
            break;
        }
        else{
            temp = vec[(n-1)%26];
            vec2.push_back(temp);
            cout << temp << "\n";
            cout << n << "\n";
        }
        n = n/26;
    }
    for (int i = vec2.size()-1; i >= 0; i--)
    {
        cout<< vec2[i] ;
    }
    
    
}