class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for (int i = 0; i < nums.size() - 1; i++) {
            first_element = nums[i];
            for (int j = i + 1; j < nums.size(); j++) {
                second_element = nums[j];
                cur_sum = first_element + second_element;
                if (cur_sum == target) {
                    cout << "nums[" << i << "] + nums[" << j << "] = " << nums[i] << " + " << nums[j] << " = " << target << endl;
                    first_index = i;
                    second_index = j;
                    indices.push_back(i);
                    indices.push_back(j);
                }
            }
        }
        return indices;
    }
private:
    int first_element;
    int second_element;
    int first_index;
    int second_index;
    int cur_sum;
    vector<int> indices;
};
