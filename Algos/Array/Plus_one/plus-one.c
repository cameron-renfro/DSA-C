# include <stdio.h>
# include <stdlib.h>
# include <stdbool.h>

    // You are given a large integer represented as an integer array digits, 
    // where each digits[i] is the ith digit of the integer. 
    // The digits are ordered from most significant to least 
    // significant in left-to-right order. 
    // The large integer does not contain any leading 0's.
    // Increment the large integer by one and return the resulting array of digits.

    // if the final element of the array is less than 9, increase that value by one and return
    // if the final element of the array == 9 - set to 0, 
    // iterate through array in reverse - if current item < 9, increment and break
    // Else - set to 0
    // If last item, set to 1
    // Reallocate size of array and add a 0
    
int* plusOne(int* digits, int digitsSize, int* returnSize) {
    if (digits[digitsSize - 1] < 9) {
        digits[digitsSize - 1]++;
        return digits;
    } else {
        for (int i = digitsSize - 1; i > -1; i--) {
            if (digits[i] < 9) {
                digits[i]++;
                break;
            } else if (digits[i] < 9 && i > 0) {
                digits[i] = 0;
                break;
            } else {
                digits[i] = 1;
            }
        }
        *returnSize = digitsSize + 1;
        digits = realloc(digits, sizeof(int) * *returnSize);
        return digits;
    }
};

int main() {
    int size = 3;
    int input[3] = {1, 2, 3};
    plusOne(input, 3, &size);
    printf("%d\n", input[2]);
    return 0;
};