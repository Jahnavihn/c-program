#include<stdio.h>
int main()
{ 
	int a[10],i,j,n,key,temp,mid,first,last;
	printf("enter n value");//n=5
	scanf("%d",&n);
	printf("enter the array elements");
	for(i=0;i<n;i++)
  { 
	scanf("%d",&a[i]);
  }
	printf("displaying the array elemeents before sorting\n");
	//1 5 3 7 0
	for(i=0;i<n;i++)
	printf("%d\t",a[i]);
	//sorting

	for(i=0;i<n-1;i++)
  { 
	for(j=0;j<n-1-i;j++)
   {
	if(a[j]>a[j+1])
     {  
	temp=a[j];
	a[j]=a[j+1];
	a[j+1]=temp;
     }
     
   }
   
  }
	printf("displaying the array elements after sorting\n");
	for(i=0;i<n;i++)
 {
	printf("%d\t",a[i]);
 } 
//perform binary search
	printf("\nenter key elements to be searched");
	scanf("%d",&key);//key=7
	first=0;
	last=n-1;
	while(first<=last)
    {
	mid=(first+last)/2;
	if(key==a[mid])
      { 
	printf("the elements %d is found at position %d\n",key,mid+1);
	return (0);
      }
	else if(key<a[mid])
      {
	last=mid-1;
      }
	else
      { 
	first=mid+1;
      }
   }
	printf("the element %d is not found in array\n",key);
	return(1);

}
