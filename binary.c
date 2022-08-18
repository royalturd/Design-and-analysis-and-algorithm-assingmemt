#include <stdio.h>
int iterativeBinarySearch(int arr[], int start, int end, int element){
   while (start <= end){
      int mid = start + (end- start )/2;
      if (arr[mid] == element)
         return mid;
      if (arr[mid] < element)
         start = mid + 1;
      else
         end = mid - 1;
   }
   return -1;
}
int main(void){
   int arr[] = {1, 2, 3, 4, 5};
   int n = 5;
   int element = 2;
   int found_index = iterativeBinarySearch(arr, 0, n-1, element);
   if(found_index == -1 ) {
      printf("Element not found in the arr ");
   }
   else {
      printf("Element found at index : %d",found_index);
   }
   return 0;
}