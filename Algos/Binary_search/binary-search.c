# include <stdio.h>
# include <stdbool.h>

int binary_search(int * nums, int size, int target) {
    int left = 0, right = size;

    while (left <= right) {
      int mid = left + (right - left) / 2;
      if (nums[mid] == target) {
        printf("Target found at index: %d \n", mid);
        return 0;
      } 
      if (nums[mid] < target) {
        left = mid + 1;
      } else {
        right = mid - 1;
      }
    }
    return 1;
}

int main() {
  int arr_size = 10;
  int nums[10] = {0, 2, 7, 10, 11, 14, 18, 20, 24, 30};
  int target = 7;
  bool result = binary_search(nums, arr_size, target);
  printf("%d \n", result);

  return 0;
};