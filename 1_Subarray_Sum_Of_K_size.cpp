#include<bits/stdc++.h>
using namespace std;
int subarraySum(int arr[], int n)
{
    int sum=0;
    int maxi = INT_MIN;
    int j = 0;
    int i;
     int win;
    cout<<"Enter window size: "<<endl;
    cin>>win;
    for( i = 0 ;  i<win ; i++)
        sum+=arr[i];
    maxi = sum;
    while(i<n)
    {
        sum= (sum + arr[i])-arr[j];
        maxi = max(maxi,sum);
        i++;
        j++;
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
    int maxi = subarraySum(arr,n);
    cout<<"Maximum sum is "<<maxi;
}