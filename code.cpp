#include <iostream>
#include <vector>
#include <unordered_map>

class Solution {
public:
    std::vector<int> twosum(std::vector<int>& nums, int target) {
        std::unordered_map<int, int> map;
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            int com = target - nums[i];
            if (map.find(com) != map.end()) {
                return {map[com], i};
            }
            map[nums[i]] = i;
        }

        return {};
    }
};

int main() {
    Solution solution;

    std::cout << "Enter the elements of the vector: ";
    std::vector<int> nums;
    int num;
    while (std::cin >> num) {
        nums.push_back(num);
    }

    int target;
    std::cout << "Enter the target value: ";
    std::cin >> target;

    std::vector<int> result = solution.twosum(nums, target);

    if (!result.empty()) {
        std::cout << "Indices: " << result[0] << ", " << result[1] << std::endl;
    } else {
        std::cout << "No solution found." << std::endl;
    }

    return 0;
}
