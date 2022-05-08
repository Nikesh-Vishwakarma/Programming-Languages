#include <stdio.h>
int main()
{ 
   this is __Wformat_mingw_printf
    int i, j, n, position, swap ,arr[99];

    printf("Enter size of array: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
        {
        printf("Element at location(%d): ",i+1);
        scanf("%d",&arr[i]);
    }

   for (i = 0; i < (n - 1); i++) {
      position = i;
      for (j = i + 1; j < n; j++) {
         if (arr[position] > arr[j])
            position = j;
      }
      if (position != i) {
         swap = arr[i];
         arr[i] = arr[position];
         arr[position] = swap;
      }
   }
   for (i = 0; i < n; i++)
      printf("%d\t", arr[i]);
   return 0;
}
