// >>> Using Dp

/*public:
   
    int climbStairs(int n) {
        if(n<1){
            return 0;
        }
        int dp[100];
        dp[0] =1;
        dp[1] = 2;
        for(int i= 2; i<n ;i++){
            dp[i] = dp[i-1]+dp[i-2];
        }
        return dp[n-1];
    }
};

# //Memoised****

class Solution {
public:
   
int mem_helper(int n , vector<int>&output ){
    if(n<0)
        return 0;
if(n ==0){
    return 1;
}
if(output[n] != -1){
    return output[n];
}
output[n] = mem_helper(n-1,output) + mem_helper(n-2,output);
    return output[n];
}
int climbStairs(int n) {
 vector<int> mem_rec(n+1,-1);
        return mem_helper(n,mem_rec);
    }

};

*/




// >>> Without Dp


/*
int arr[46];  // because Constraints are: 1 <= n <= 45
        arr[0] = 1; // oth stairs should be 1
        arr[1] = 1; // 1th stair should be 1
        arr[2] = 2; // 2nd stair should be 2
        for(int i=3; i<=n; i++){
            arr[i] = arr[i-1] + arr[i-2];
        }
        return arr[n];
*/


