#include<iostream>
#include<vector>

using namespace std;

int solve(vector<int> arr, int index, int total){
    if(index ==  arr.size()){
        return total;
    }
    return solve(arr, index+1, total ^ arr[index]) + solve(arr, index+1, total);
}

int main(){
    int n;
    vector<int> vec;
    cin >> n;
    int temp;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        vec.push_back(temp);
    }
    int sum = solve(vec, 0,0);
    cout << sum;
}