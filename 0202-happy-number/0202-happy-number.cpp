class Solution {

    int fun(int n){

        int sum = 0;
        while(n>0){
            int a = n % 10;
            sum += a*a;
            n = n/10;
        }
        return sum;
        }

public:
    bool isHappy(int n) {
        int slow = n;
        int fast = n;

        while(fast != 1){
            slow = fun(slow);
            fast = fun(fast);
            fast = fun(fast);

            if(slow == fast && fast != 1){
                return false;
            }
        }
        return true;
    }
};