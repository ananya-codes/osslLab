#include<bits/stdc++.h>
using namespace std;

int all_subs(int i,int arr[], int n, vector<int> ds,int sum,int k)
{
    if(i>=n)
    {
        if(sum==k){
        return 1;
        }
        return 0;
    }

    sum+=arr[i];
    ds.push_back(arr[i]);
    int l= all_subs(i+1,arr,n,ds,sum,k);
    
    sum-=arr[i];
    ds.pop_back();
    int r = all_subs(i+1,arr,n,ds,sum,k);
    
    return l+r;
}

int main()
{
    int arr[]={0,1,2,3,4};
    int n;
    cin>>n;
    vector<int> ds;
    cout<<all_subs(0,arr,n,ds,0,3);
}