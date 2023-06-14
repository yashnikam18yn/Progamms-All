#include <stdio.h>

int binarySearch(int a[], int x, int low, int high) {
  
  while (low <= high) {
    int mid = low + (high - low) / 2;

    if (a[mid] == x)
      return mid;

    if (a[mid] < x)
      low = mid + 1;

    else
      high = mid - 1;
  }

  return -1;
}

int main(void) {
  int a[] = {3, 4, 5, 6, 7, 8, 9};
  int n = 7;
  int x;
    printf("GIVEN ARRAY IS:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
  printf("ENTER ELEMENT YOU WANT TO FIND:");
  scanf("%d",&x);
  int result = binarySearch(a, x, 0, n - 1);
  if (result == -1)
    printf("Not found");
  else
    printf("Element is found at index %d", result);
  return 0;
}