class Solution {
public:
int minEatingSpeed(std::vector<int>& piles, int h) {
    int left = 1;
    int right = *std::max_element(piles.begin(), piles.end());

    while (left < right) {
        int mid = left + (right - left) / 2;

        // Calculate the total hours required to eat all bananas at speed 'mid'
        int totalHours = 0;
        for (int pile : piles) {
            totalHours += (pile + mid-1 ) / mid;
        }

        if (totalHours <= h) {
            // We can finish eating in 'h' hours, so we try to minimize 'k'
            right = mid;
        } else {
            // We cannot finish in 'h' hours, so we need to increase 'k'
            left = mid + 1;
        }
    }

    return left;
}

};