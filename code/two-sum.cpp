/*
        vector<int>::iterator v; 
        for(v = nums.begin(); v != nums.end(); ++v) 
            indicies.push_back(*v);
*/
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> indicies;
        int i = 0, j = 0, vsize = nums.size();
        for(i = 0; i < vsize - 1; i++){
            for(j = i + 1;j < vsize;j++){
                if(nums.at(i)+nums.at(j)==target){
                    indicies.push_back(i);
                    indicies.push_back(j);
                    // 为了强行跳出深层嵌套，代码简单时可以用
                    // 也可以设置flag代替
                    goto label;
                }
            }
        }
label:
        return indicies;
    }
};