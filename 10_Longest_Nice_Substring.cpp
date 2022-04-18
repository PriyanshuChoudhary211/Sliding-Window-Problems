#include<bits/stdc++.h>
using namespace std;
    string longestNiceSubstring(string s) {
        if(s=="")
            return "";
        
        set<char>st;
        for(auto it : s)
            st.insert(it);
        if(s.size()==1)
            return "";
        for(int i = 0 ; i<s.length();i++)
        {
            if(s[i]>='a' && s[i]<='z')
            {
                if(find(st.begin(),st.end(),s[i]-32) == st.end())
                {
                    string s1 = longestNiceSubstring(s.substr(0,i));
                     string s2 = longestNiceSubstring(s.substr(i+1));
                     if(s1.length()>=s2.length())
                         return s1;
                     else return s2; 
                }
            }
            else
            {
                if(find(st.begin(),st.end(),s[i]+32) == st.end())
                {
                    string s1 = longestNiceSubstring(s.substr(0,i));
                     string s2 = longestNiceSubstring(s.substr(i+1));
                       if(s1.length()>=s2.length())
                         return s1;
                     else return s2; 
                }
            }
            if(i == s.length()-1)
                return s;
        }
      
           return ""; 
        
    }

int main()
{
    cout<<"Enter a String"<<endl;
    string s;
    cin>>s;
    cout<<longestNiceSubstring(s);

}