long long zeroFilledSubarray(int* nums, int numsSize) {
    long long count = 0;
    long long currentZeros = 0;

    for (int i = 0; i < numsSize; i++) {
        if (nums[i] == 0) {
            currentZeros++;        // extend zero streak
            count += currentZeros; // add all subarrays ending here
        } else {
            currentZeros = 0;      // reset streak
        }
    }
    return count;
}
