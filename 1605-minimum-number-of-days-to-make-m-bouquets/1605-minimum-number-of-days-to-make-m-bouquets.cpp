class Solution {
public:
int minDays(std::vector<int>& bloomDay, int m, int k) {
    double n = bloomDay.size();
    long long f= static_cast<long long>(m)*k;
    if (n < f) return -1;

    int left = *min_element(bloomDay.begin(), bloomDay.end()); ; // Minimum possible days
    int right = *std::max_element(bloomDay.begin(), bloomDay.end()); // Maximum possible days

    while (left < right) {
        int mid = left + (right - left) / 2;

        // Check if it's possible to make m bouquets within 'mid' days
        int bouquets = 0;
        int flowers = 0;

        for (int i = 0; i < n; ++i) {
            if (bloomDay[i] <= mid) {
                flowers++;
                if (flowers == k) {
                    bouquets++;
                    flowers = 0;
                }
            } else {
                flowers = 0;
            }
        }

        if (bouquets >= m) {
            // We can make m bouquets within 'mid' days, so try to minimize 'mid'
            right = mid;
        } else {
            // We cannot make m bouquets within 'mid' days, so try increasing 'mid'
            left = mid + 1;
        }
    }

    return left;
}

};