// class Solution {
// public:
//     bool isAnagram(string s, string t) {
//         if(s.size() != t.size()) return false;

//         unordered_map <char,int> smap;
//         unordered_map <char,int> tmap;

//         for(int i=0; i< s.size(); i++)
//         {
//             smap[s[i]]++;
//             tmap[t[i]]++;
//         }
//         for(int i=0; i<smap.size(); i++)
//         {
//             if(smap[i] != tmap[i]) return false;
//         }
//         return true;
//     }
// };

#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) {
            return false; // Different lengths, not anagrams
        }

        unordered_map<char, int> charCount;

        // Count characters in s
        for (char c : s) {
            charCount[c]++;
        }

        // Decrement count for characters in t
        for (char c : t) {
            charCount[c]--;
        }

        // Check if all counts are zero
        for (const auto& pair : charCount) {
            if (pair.second != 0) {
                return false;
            }
        }

        return true;
    }
};

int main() {
    Solution solution;

    // Test cases
    string s1 = "anagram";
    string t1 = "nagaram";
    string s2 = "rat";
    string t2 = "car";

    cout << s1 << " and " << t1 << " are anagrams: "
         << (solution.isAnagram(s1, t1) ? "true" : "false") << endl;

    cout << s2 << " and " << t2 << " are anagrams: "
         << (solution.isAnagram(s2, t2) ? "true" : "false") << endl;

    return 0;
}
