// #include<iostream>
// #include<map>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int a[n];
//     for(int i=0;i<n;i++)
//     {
//         cin>>a[i];
//     }
//     map<int,int>m;
//     for(int i=0;i<n;i++)
//     {
//         m[a[i]]++;
//     }
//     int numofpair=0;
//     for(auto p:m)
//     {
//         int j=p.second;
//         numofpair+=((j-1)*j)/2;
//     }
//     cout<<numofpair;
// }

#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<vector <int> > v1;
    int m, n;
    int temp;
    cin >> m;
    cin >> n;
    int sum = 0;
    int max = 0;
    for(int i = 0 ; i < m; i++){
        vector<int> v2;
        for (int j = 0; j < n; j++)
        {
            cin >> temp;
            v2.push_back(temp);
        }
        v1.push_back(v2);
    }
    for(int i = 0 ; i < m; i++){
        sum = 0;
        for (int j = 0; j < n; j++)
        {
            sum += v1[i][j];
        }
        if(max < sum)
            max = sum;
    }
    cout << max; 
}