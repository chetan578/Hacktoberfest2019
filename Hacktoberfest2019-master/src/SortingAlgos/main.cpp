#include <iostream>

using namespace std;

void bubblesort(int arr[],int n)
{
for(int i=0;i<n-1;i++)
{
   for(int j=0;j<n-1-i;j++)
   {
      if(arr[j]>arr[j+1])
      swap(arr[j],arr[j+1]);

   }
}

}

int main()
{
int n=5;
int arr[]={50,40,30,20,10};
bubblesort(arr,n);
for(int i=0;i<5;i++)
   cout<<arr[i]<<" ";

}

