// class Solution {
//   public:
  
//    void solve(vector<int>&arr,vector<int>&ans,int i,int sum){
//        if(i==arr.size()){
//            ans.push_back(sum);
//            return;
//        }
            // pick
//        solve(arr,ans,i+1,sum+arr[i]);

            // not pick
//        solve(arr,ans,i+1,sum);
//    }
  
//     vector<int> subsetSums(vector<int>& arr) {
//         // code here
//         int i=0;
//         int sum =0;
//         vector<int>ans;
//         solve(arr,ans,i,sum);
//         return ans;
//     }
// };