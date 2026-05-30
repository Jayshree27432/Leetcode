int mySqrt(int x) {
    if (x == 0) return 0;   // base case
    
    int left = 1, right = x;
    int ans = 0;

    while (left <= right) {
        long mid = left + (right - left) / 2;  // avoid overflow

        if (mid * mid == x) {
            return (int)mid;  // exact square root
        } else if (mid * mid < x) {
            ans = (int)mid;   // store possible floor value
            left = mid + 1;   // search higher
        } else {
            right = mid - 1;  // search lower
        }
    }
    return ans;  // floor of sqrt(x)
}
