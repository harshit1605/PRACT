#include <Stdio.h>
#include <conio.h>
 main()
{
    int i,n,j,num,arr[10],t,s;
    printf("\n Enter the number of elements in the array:");
    scanf("%d",&n);
    printf("\n Enter the array elements:");
  for(i=0;i<n;i++)
    {
      scanf("%d",&arr[i]);
    }
    printf("\n Enter the number to be inserted: ") ;
    scanf ("%d",&num);
  for(i=0;i<n;i++)
  {
    if(num>=arr[i])
        continue;
    else
        s=i;
        break;
     }


  for(i=n-1;i>=s;i--)
  {
      arr[i+1]=arr[i];

  }
  arr[s]=num;


      printf("\n The array after insertion of is: ",  num);
      for(i=0;i<n+1;i++)
      {
         printf("\t%d", arr[i]);
      }
}
