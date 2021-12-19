#include<stdio.h>
#include<stdlib.h>
int MaxProfit(int[],int);

int main()
{
  int *ptr = NULL;
  int iLength = 0;
  int iCnt = 0;
  int iRet = 0;
  
  printf("Enter length of array\n");
  scanf("%d",&iLength);
  
  ptr = (int *)malloc(iLength*sizeof(int));
  
  printf("Enter %d elements\n",iLength);
  
  for(iCnt = 0;iCnt < iLength;iCnt++)
  {
    scanf("%d",&ptr[iCnt]); 
  }
  
  iRet = MaxProfit(ptr,iLength);
  
  printf("Maximum profit is %d\n",iRet);
  
  return 0;
}
int MaxProfit(int Arr[],int iSize)
{
  int i = 0;
  int iDiff = 0;
  int iSum = 0;
  
  for(i = 0;i < iSize-1;i++)
  {
    if(Arr[i+1] > Arr[i])
	{
	  iDiff = Arr[i+1] - Arr[i];
	  iSum = iSum + iDiff;
	}
  }
  
  return iSum;
}