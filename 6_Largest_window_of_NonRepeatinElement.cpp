#include<bits/stdc++.h>
using namespace std;

    int lengthOfLongestSubstring(string s) {
       int i = 0, j = 0;
        int si=0;
        int sum = 0 ;
        map<char,int>m;
        int n = s.length();
        while(j<n)
        {
            m[s[j]]++;
            sum++;
            if(m.size() == sum)
            {
                si = max(si,j-i+1);
             
            }
            while(m.size()<sum)
            {
                m[s[i]]--;
                sum--;
                if(m[s[i]]==0)
                    m.erase(s[i]);
                i++;
            }
               j++;
        }
        return si;
    } 
int main()
{
    string s;
    cin>>s;

    cout<<lengthOfLongestSubstring(s);
    

}