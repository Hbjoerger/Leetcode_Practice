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
};


int main() {
    Solution s;
    cout << s.addDigits(38) << endl;  // Output: 2
    cout << s.addDigits(0) << endl;   // Output: 0
    cout << s.addDigits(942) << endl; // Output: 6
    return 0;
}
