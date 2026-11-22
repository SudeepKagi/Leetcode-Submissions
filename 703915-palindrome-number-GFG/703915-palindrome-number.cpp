class Solution {
  public:
    bool isPalindrome(int n) {
        int a = n;
        int rev = 0;
        while(n!=0){
            int ld = n%10;
            rev = rev*10 + ld;
            n = n/10;
        }
        if(rev == a){
            return true;
        }else{
            return false;
        }
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna