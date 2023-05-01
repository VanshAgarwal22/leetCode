
        class Solution {
public:
    int findGCD(vector<int>& nums) {
        int min = nums[0], maxy = nums[0];
        for(auto i : nums) {
            if(i < min) min = i;
            if(i > maxy) maxy = i;
        }
        // GCD of min and max
        // Euclidean algorithm
        while(min && maxy) {
            if(maxy > min) maxy %= min;
            else min %= maxy;
        }
        return max(maxy, min);
    }
};
    