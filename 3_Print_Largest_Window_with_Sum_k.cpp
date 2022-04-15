#include<bits/stdc++.h>
using namespace std;
void subarraySizeSum(int arr[], int n)
{
    cout<<"Enter sum"<<endl;
    int target;
    cin>>target;
    int size = 0,maxi=0,m=0,x=0;
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
            if(size>maxi)
            {
                maxi = size;
                m = i;
                x=j;
            }

            j++;
            sum+=arr[j];
        }
      
    }
     for(int i = m ; i<=x;i++)
      cout<<arr[i]<<" ";
    

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
    subarraySizeSum(arr,n);
   return 0;
}