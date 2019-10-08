#include <iostream>

using namespace std;

int partition(int arr[],int start,int end)
{
   int pindex=start;
   int pivot=arr[end];
   for(int i=start;i<end;i++)
   {
   if(arr[i]<=pivot)
      {
         swap(arr[pindex],arr[i]);
      pindex++;
      }
   }
   swap(arr[end],arr[pindex]);
   return (pindex);
}

void quicksort(int arr[],int start,int end)
{
   if(start<end)
   {
   int pIndex=partition(arr,start,end);
   quicksort(arr,start,pIndex-1);
   quicksort(arr,pIndex+1,end);
}
}
int main ()
{
   int arr[100];
   for(int i=0;i<5;i++)
      cin>>arr[i];
   quicksort(arr,0,4);
   for(int i=0;i<5;i++)
      cout<<arr[i]<<" ";
}
