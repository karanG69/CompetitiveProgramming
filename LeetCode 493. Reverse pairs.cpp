class Solution {
public:
    int count = 0;  // Variable to store the count of reverse pairs

    // Function to merge two sorted subarrays
    void merge(vector<int>& nums, int low, int mid, int high) {
        vector<int> temp;
        int left = low, right = mid + 1;

        // Merge the two sorted subarrays
        while (left <= mid && right <= high) {
            if (nums[left] <= nums[right]) {
                temp.push_back(nums[left]);
                left++;
            } else {
                temp.push_back(nums[right]);
                right++;
            }
        }
        // Copy remaining elements from the left subarray
        while (left <= mid) {
            temp.push_back(nums[left]);
            left++;
        }
        // Copy remaining elements from the right subarray
        while (right <= high) {
            temp.push_back(nums[right]);
            right++;
        }
        // Copy merged elements back to the original array
        for (int i = low; i <= high; i++) {
            nums[i] = temp[i - low];
        }
    }

    // Function to count reverse pairs across two subarrays
    void countpairs(vector<int>& nums, int low, int mid, int high) {
        int right = mid + 1;
        for (int i = low; i <= mid; i++) {
            while (right <= high && static_cast<long long>(nums[i]) > 2 * static_cast<long long>(nums[right])) {
                right++;
            }
            count += right - (mid + 1);
        }
    }

    // Function to implement merge sort and count reverse pairs
    void mergesort(vector<int>& nums, int low, int high) {
        if (low >= high) {
            return;
        }
        int mid = (low + high) / 2;
        mergesort(nums, low, mid);
        mergesort(nums, mid + 1, high);
        countpairs(nums, low, mid, high);
        merge(nums, low, mid, high);
    }

    // Function to start the merge sort process and return the count of reverse pairs
    int reversePairs(vector<int>& nums) {
        mergesort(nums, 0, nums.size() - 1);
        return count;
    }
};
