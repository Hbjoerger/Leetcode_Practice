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
    cout << s.addDigits(38) << endl;  // Output: 2
    cout << s.addDigits(0) << endl;   // Output: 0
    cout << s.addDigits(942) << endl; // Output: 6
    return 0;
}
