/* example le lete hai 'AABABBA'
Iss question me sbse pehle ye sochna hai ki pata kaise kare ki kaunse letter ko replace
krna hai A ya B
ab maanlo ki A ko replace kr rhe hai
Toh ab pta krna hai ki kaunse wale A's ko replace krna hai 

Ab sliding window banayenge i aur j ko 0 se atart karo taaki 1 letter ka window bane
fir tb tak window ka size badhana hai jb tk [size_window - maxFreq <= k] na ho jaye,
maxFreq koi bhai letter ka ho skta hai voh update krte rehna padega
*/

class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char, int> letters;
        int res = 0;
        int left = 0;
        int right = 0;
        int maxf = 0;

        for(int right = 0; right < s.size();right++){
            letters[s[right]] = 1 + letters[s[right]];
            maxf = max(maxf, letters[s[right]]);

            if((right - left + 1) - maxf > k){
                letters[s[left]] -=1;
                left++;
            }
            else{
                res = max(res, (right - left + 1));
            }
        }
        return res;
    }
};