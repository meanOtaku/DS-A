#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    vector<int> vec;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        int temp;
        for (int j = 0; j < a[2*i]; j++)
        {
            if((2*i + 1) > n){
                break;
            }
            temp = a[2*i+1];
            vec.push_back(temp);
        }
        
    }
    for (int i = 0; i < vec.size(); i++)
    {
        cout<<vec[i] << " ";
    }
}