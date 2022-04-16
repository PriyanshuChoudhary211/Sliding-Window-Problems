//Initial template for C++
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{
  public:
    int longestKSubstr(string s, int k) {
    int i = 0,j=0;
    int size = 0;
    int max_size = -1;
    map<char,int>m;
    while(j<s.length())
    {
        m[s[j]]++;
        if(m.size()==k)
        {
            size = j-i+1;
            max_size = max(max_size,size);
        }
        while(m.size()>k)
        {
            m[s[i]]--;
            if(m[s[i]]==0)
            {
            m.erase(s[i]);
            }
            i++;
        }
        j++;
        
    }
    return max_size;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int k;
        cin >> k;
        Solution ob;
        cout << ob.longestKSubstr(s, k) << endl;
    }
}
  // } Driver Code Ends