// o(nlogn)

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
// sort the array
//          init i , j 
//         increment i , if sum is lower , dec j is greater
//          loop till i > = j 
        
    // if (nums.size()==NULL) {return 0}
    vector<pair<int, int>> nums2; 
    
    for (int i = 0 ;i <nums.size();i++)
    {
        pair<int,int> temp(nums[i],i);
        nums2.push_back(temp);
    }
        
    sort(nums2.begin(),nums2.end());
    
    int i = 0 ;
    int j = nums2.size();
    while(i<j){
         if(nums2[i].first + nums2[j].first == target) {
            vector<int> t{nums2[i].second, nums2[j].second};
            return t;} 
         else if (nums2[i].first+nums2[j].first <target){
             ++i;}
         else if (nums2[i].first +nums2[j].first > target){
            --j;}
         else {
             vector<int> ret{};
             return ret ;}
     
    
    }
   }  
};
