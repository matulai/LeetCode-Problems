class Solution {
    public int climbStairs(int n) {
        int numberOfSteps = 1;
        int lastSteps = 1;
        int penultimeSteps = 1;
        for(int x = 2; x <= n; x++) {
            numberOfSteps = lastSteps + penultimeSteps;
            penultimeSteps = lastSteps;
            lastSteps = numberOfSteps;
        }
        return numberOfSteps;
    }
}