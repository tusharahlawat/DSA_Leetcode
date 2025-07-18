class Solution {
public:
    bool isPerfectSquare(int num) {
        int num1 = sqrt(num);

        return((num1*num1)==num);
    }
};