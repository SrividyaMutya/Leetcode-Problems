/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* selfDividingNumbers(int left, int right, int* returnSize) {
    static int ans[10000];   // static array, big enough for the range
    *returnSize = 0;         // initially no numbers found

    for (int num = left; num <= right; num++) {
        int temp = num;
        int isValid = 1;

        while (temp > 0) {
            int digit = temp % 10;  // extract last digit
            if (digit == 0 || num % digit != 0) {
                isValid = 0;        // fails self-dividing condition
                break;
            }
            temp /= 10;  // move to next digit
        }

        if (isValid) {
            ans[*returnSize] = num;  // store valid number
            (*returnSize)++;
        }
    }

    return ans;
}