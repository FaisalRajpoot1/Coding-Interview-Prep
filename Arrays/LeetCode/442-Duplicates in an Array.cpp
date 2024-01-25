class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector <int> duplicates;
        set <int> unique;
        for(int i =0 ; i<nums.size();i++){

            if(unique.count(nums[i]) ){
               duplicates.push_back(nums[i]);
                
            }else{
               unique.insert(nums[i]);

            }
        }return  duplicates;

        //second approch pass all test case but time limit exceed
//         for(int i=0; i<nums.size();i++){
//             for(int j=i+1; j<nums.size();j++){
//                 if(nums[i] != nums[j]){
//                     continue;
//                 }else{
//                    duplicates.push_back(nums[i]);
//                     break;
//                 }
//             }
//         }return  duplicates;
     }
 };
