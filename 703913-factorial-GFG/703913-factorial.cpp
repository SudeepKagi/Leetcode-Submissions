class Solution {
  public:
    int factorial(int n) {
        if(n==1 || n==0){
            return 1;
        }
        
        int fact = n * factorial(n-1);
        return fact;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna