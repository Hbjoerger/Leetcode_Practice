#include <iostream>
using namespace std;

class Solution {
public:

    // Problem One: Add Digits
    int addDigits(int num) {
        while (num >= 10) {          
            int sum = 0;
            while (num > 0) {        
                sum += num % 10;    
                num /= 10;           
            }
            num = sum;             
        }
        return num;                  
    }

    // Problem Two: First Unique Character in a String
    int firstUniqChar(string s) {
        int count[26] = {0};
        for (char c : s) {
            count[c - 'a']++;
        }
        for (int i = 0; i < s.length(); i++) {                  
            if (count[s[i] - 'a'] == 1) {                      
                return i;                                     
            }
        }
        return -1;                                 
    }   
};


int main() {
    Solution s;

    // ---- Problem One: Add Digits ----
    cout << "AddDigits Tests:" << endl;
    cout << "38 -> " << s.addDigits(38) << endl;    // Expected: 2
    cout << "0 -> " << s.addDigits(0) << endl;      // Expected: 0
    cout << "942 -> " << s.addDigits(942) << endl;  // Expected: 6
    cout << "99 -> " << s.addDigits(99) << endl;    // Expected: 9
    cout << "12345 -> " << s.addDigits(12345) << endl; // Expected: 6 (1+2+3+4+5=15 -> 1+5=6)

    // ---- Problem Two: First Unique Character ----
    cout << "\nFirstUniqChar Tests:" << endl;
    cout << "\"leetcode\" -> " << s.firstUniqChar("leetcode") << endl;       // Expected: 0 ('l')
    cout << "\"loveleetcode\" -> " << s.firstUniqChar("loveleetcode") << endl; // Expected: 2 ('v')
    cout << "\"aabb\" -> " << s.firstUniqChar("aabb") << endl;               // Expected: -1 (no unique)
    cout << "\"swiss\" -> " << s.firstUniqChar("swiss") << endl;             // Expected: 1 ('w')
    cout << "\"z\" -> " << s.firstUniqChar("z") << endl;                     // Expected: 0 ('z')
}

