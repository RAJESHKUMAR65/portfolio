
#include<bits/stdc++.h>
using namespace std;
bool ValidationOfRomanNumerals(string str)
{
 
    // Regex to check valid
    // ROMAN NUMERAL .
    const regex pattern("^M{0,3}(CM|CD|D?C{0,3})(XC|XL|L?X{0,3})(IX|IV|V?I{0,3})$");
 
    // If the str
    // is empty return false
    if (str.empty()) {
        return false;
    }
 
    // Return true if the str
    // matched the ReGex
    if (regex_match(str, pattern)) {
        return true;
    }
    else {
        return false;
    }
}
    int romanToInt(string s) {
        unordered_map<char, int> m;
        
        m['I'] = 1;
        m['V'] = 5;
        m['X'] = 10;
        m['L'] = 50;
        m['C'] = 100;
        m['D'] = 500;
        m['M'] = 1000;
        
        int ans = 0;
        
        for(int i = 0; i < s.length(); i++){
            if(m[s[i]] < m[s[i+1]]){
                ans -= m[s[i]];
            }
            else{
                ans += m[s[i]];
            }
        }
        return ans;
    }

int main(){
    string s;
    cin>>s;
    if(!ValidationOfRomanNumerals(s)){
        cout << "Invalid" << endl;
    }
    else{
        cout << romanToInt(s) << endl;
    }
return 0;
    
}