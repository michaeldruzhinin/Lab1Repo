#include "library.hpp"
namespace template_library {

    int josephus_problem([[maybe_unused]] const std::vector<int>& nums,
        [[maybe_unused]] int k) {
        int n = (int)nums.size();
        std::deque <int> d;
        for (int i = 0; i < n; i++) {
            d.push_back(nums[i]);
        }
        int step = 0, ans = 0;
        while (!d.empty()) {
            step++;
            if (step % k != 0) d.push_back(d.front());
            ans = d.front();
            d.pop_front();
        }
        return ans;
    };
}
