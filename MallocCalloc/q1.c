#include<stdio.h>
#include<stdlib.h>
int main()
{
  int size,n,*arr;
  printf("enter the size of the array:");
  scanf("%d",&size);
  arr=(int *) malloc (size*sizeof(int));
  if(arr==NULL)
  {
    printf("Memory not allocated");
    return 0;
  }
  printf("Enter the values:\n");
  for (int a=0;a<=size;a++)
  {
    scanf("%d",&n);
    arr[a]=n;

  }
  int length=sizeof(arr);
  printf("Repeated elements are: \n");


  for(int i=0;i<length;i++)
  {
    for(int j=i+1;j<length;j++)
    {
      if(arr[i]==arr[j])
      {
        printf("%d\n",arr[j]);
      }
    }
  }
  free(arr);
}