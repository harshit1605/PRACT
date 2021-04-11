//Harshit Choudhary
//1803210060
#include<stdio.h>
 #include<conio.h>
int main()
{ int ch;
   printf("Enter 1 for insertion into program\n");
   printf("Enter 2 for deletion into program\n");
   printf("Enter 3 for traversing\n");
   printf("Enter your choice :\n");
   scanf("%d",&ch);
   switch(ch)
   {
   case 1 :
     {
    int i,pos,n,k,a[50];
    printf("Enter how many data elements you want to enter :\n" );
    scanf("%d",&n);
    printf("Enter your desired elements :\n" );
    for(i=0;i<n;i++)
        {
           scanf("%d",&a[i]);
        }
    printf("\nEnter the postion where you want to insert the new element :\n");
    scanf("%d",&pos);
    printf("Enter the data element you want to insert :\n");
    scanf("%d",&k);
    for(i=n-1;i>=pos-1;i--)
        {
           a[i+1]=a[i];
        }
    a[pos-1]=k;
    printf("Your new sequensce of elements is :\n");
    for(i=0;i<=n;i++)
        {
           printf("%d ",a[i]);
        }
    break;
}

case 2:
{
    int i,pos,j,n,a[50];
    printf("Enter how many data elements you want to enter :\n" );
    scanf("%d",&n);
    printf("Enter your desired elements :\n" );
    for(i=0;i<n;i++)
        {
        scanf("%d",&a[i]);
        }
    printf("\nEnter the postion of element you want to delete :\n");
    scanf("%d",&pos);
    for(i=pos-1;i<=n-1;i++)
        {
           a[i]=a[i+1];
        }
    printf("Your new sequence of elements is :\n");
    for(i=0;i<=n-2;i++)
        {
           printf("%d ",a[i]);
        }
    break;
}

case 3:
     {
    int i,n,a[50];
    printf("Enter the no. elements you want to enter :\n");
    scanf("%d",&n);
    printf("Enter your data elements :\n");
    for(i=0;i<=n-1;i++)
       {
          scanf("%d",&a[i]);
       }
 printf("You entered : ");
    for(i=0;i<=n-1;i++)
       {
          printf("%d ",a[i]);
       }
       }
    break;
    }
}


/*   OUTPUT
Enter 1 for insertion into program
Enter 2 for deletion into program
Enter 3 for traversing
Enter your choice :
1
Enter how many data elements you want to enter :
4
Enter your desired elements :
1
5
9
22

Enter the postion where you want to insert the new element :
3
Enter the data element you want to insert :
9
Your new sequensce of elements is :
1 5 9 9 22
Process returned 0 (0x0)   execution time : 33.530 s
Press any key to continue.
*/

