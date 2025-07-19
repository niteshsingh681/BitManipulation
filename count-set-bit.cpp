//1. Number of 1 Bits
#include <iostream>
using namespace std;
class Solution {
public:
    int hammingWeight(int n) {
        int ans=0;
        for(int i=32-1;i>=0;i--){
            if(n & (1<<i)) ans++;
        }
        return ans;
    }
};
int main() {
    Solution solution;
    int n = 11; // Example input
    int result = solution.hammingWeight(n);
    cout << "Number of 1 bits in " << n << ": " << result << endl;
    return 0;
}