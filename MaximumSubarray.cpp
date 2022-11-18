// 53. Maximum Subarray @Leetcode

// C++ code: Retrun Maximum Subarray
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int sum = 0;
        int maxi = nums[0];

        for(int i=0; i<nums.size(); i++){
            sum = sum + nums[i];
            maxi = max(maxi,sum);
            if(sum<0){
                sum = 0;
            }
        }
        return maxi;
    }
};

// Java code: Retrun first index of Maximum Subarray
public class maxsubindex {
    public static void main(String[] args) {
        int[] arr={-2, 4, -5, 10, 9, -7, 0, 5, 20};
        System.out.println(indexfind(arr));
    }
    public static int indexfind(int[] arr){
        int res=arr[0];
        int ans=0;
        for(int i=0;i<arr.length;i++){
            int curr=0;
            for(int j=i;j<arr.length;j++){
                curr+=arr[i];
                if(curr>res){
                    res=curr;
                    ans=i;
                }
            }
        }
        return ans;
    }
}
