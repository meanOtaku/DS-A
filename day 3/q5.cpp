#include<iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int nums[n], index[n], output[n];
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> index[i];
        output[i] = -1;
    }
    for (int i = 0; i < n; i++)
    {
        if(output[index[i]] < 0){
            output[index[i]] = nums[i];
        }else{
            for (int j = n; j >= index[i]; j--)
            {
                
                output[j] = output[j - 1];
            }
                output[index[i]] = nums[i];
            
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << output[i];
    }
}