class Solution {
public:
    int fun(int n) {
        int sum = 0;

        while (n > 0) {
            int d = n % 10;
            sum += d * d;
            n /= 10;
        }

        return sum;
    }
    bool isHappy(int n) {
        int slow=n;
        int fast=n;

        while(fast!=1){
            slow=fun(slow);
            fast=fun(fast);
            fast=fun(fast);
            if(slow!=1 && slow==fast){
                return false;
            }
        }
        return true;
    }
};