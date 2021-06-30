#include<stdio.h>

void swap_max(int l[],int length,int pos)
{
	int a=0,b,index;
	for(int i=pos;i<length;i++)
	{
	   if(l[i]>a)
	   {
	     a=l[i];
	     index=i;
	   }  
	}
	b=l[index];
	l[index]=l[pos];
	l[pos]=b;
}

void ssort(int arr[],int length)
{
	for(int i=0;i<length;i++)
	{
	   swap_max(arr,length,i);
	}
}
