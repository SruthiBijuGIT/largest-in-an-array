#include <stdio.h>    
int main()    
{    
int a[10],i,n,largest;      
printf("Enter the size of array:"); 
scanf("%d",&n); 
printf("Enter the array elements:");     
for ( i=0;i<n;i++) 
{ 
  scanf("%d",&a[i]);
}
largest=a[0];
for(i=1;i<n;i++)
{    
if(largest<a[i])    
largest=a[i];    
}      
printf("Largest element present in given array: %d\n", largest);    
return 0;    
}    
