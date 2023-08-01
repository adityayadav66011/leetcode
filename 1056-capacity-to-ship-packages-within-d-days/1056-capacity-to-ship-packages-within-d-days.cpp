class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
     int left = *max_element(weights.begin(), weights.end());
    int right = accumulate(weights.begin(), weights.end(), 0);

    while (left < right) {
        int mid = left + (right - left) / 2;
        int currentDays = 1;
        int currentWeight = 0;

        for (int weight : weights) {
            if (currentWeight + weight > mid) {
                currentDays++;
                currentWeight = weight;
            } else {
                currentWeight += weight;
            }

            if (currentDays > days) {
                break;
            }
        }

        if (currentDays <= days) {
            right = mid;
        } else {
            left = mid + 1;
        }
    }

    return left;
}    
};