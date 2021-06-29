#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr1[n],arr2[n];
   
    for(int i=0;i<n;i++)
    cin>>arr1[i];
    
    int j=n/2,k=0;
    
    for(int i=0;i<n/2;i++)
    {
        arr2[k++]=arr1[i];
        arr2[k++]=arr1[j++];
    }
    
    for(int i=0;i<n;i++)
        cout<<arr2[i];
}