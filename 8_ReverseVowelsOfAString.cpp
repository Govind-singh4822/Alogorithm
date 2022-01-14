class Solution {
public:
    string reverseVowels(string s) {
        
        string res = "";
        
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o'|| s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O'|| s[i]=='U')
            {
                res+= s[i];
            }
        }
        
        reverse(res.begin(),res.end());
        
        int j=0;
        
         for(int i=0;i<s.size();i++)
        {
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o'|| s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O'|| s[i]=='U')
            {
                s[i] = res[j++];     
            }
        }
            
        return s;
    }
};

/*
Given a string s, reverse only all the vowels in the string and return it.

The vowels are 'a', 'e', 'i', 'o', and 'u', and they can appear in both cases.

 

Example 1:

Input: s = "hello"
Output: "holle"
Example 2:

Input: s = "leetcode"
Output: "leotcede"
*/
