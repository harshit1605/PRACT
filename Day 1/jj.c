#include <stdio.h>

void distict_elements(int a[], int n);
int main()
{
int s, i, arr[20];
// Get the array size
scanf("%d", &s);
// Get the array elements
for(i=0; i<s; i++)
{
scanf("%d", &arr[i]);
}
// Function call to print the distinct elements in an array
distict_elements(arr, s);
return 0;
}
void distict_elements(int a[], int n)
{
int i, j;
// Pick all elements one by one
for (i=0; i<n; i++)
{
// Check if the picked element is already printed
for (j=0; j<i; j++)
{
if (a[i] == a[j])
break;
}
// If not printed earlier, then print it
if (i == j)
printf("%d ", a[i]);
}
}

