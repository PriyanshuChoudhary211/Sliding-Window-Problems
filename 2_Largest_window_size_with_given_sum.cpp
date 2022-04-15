#include<bits/stdc++.h>
using namespace std;
int subarraySizeSum(int arr[], int n)
{
    cout<<"Enter sum"<<endl;
    int target;
    cin>>target;
    int size = 0,maxi=0,m=0,n=0;
    int i = 0, j = -1,sum = 0;
    while(j<n)
    {
        if(sum<target)
        {
            j++;
            sum+=arr[j];
        }
        else if(sum>target)
        {
            sum-=arr[i];
            i++;
            
        }
        else
        {
            size = (j-i)+1;
            maxi = max(size,maxi);            
            j++;
            sum+=arr[j];
        }
    }
    return maxi;
    

}
int main()
{
    int n;
    cout<<"Enter number of element in an array: "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter element"<<endl;
    for(int i = 0 ; i<n; i++)
      cin>>arr[i];
    int maxi = subarraySizeSum(arr,n);
    cout<<"Maximum size is "<<maxi;
}