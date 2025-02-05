#include<stdio.h>
int bin_search(int arr[],int size,int key){
    int i,low=0,high=size-1,mid;
    while(low<=high){
       mid=(low+high)/2;
       if(key==arr[mid]) 
         return mid;
       else if(key>arr[mid])
         low=mid+1;
       else 
         high=mid-1;
    }
    return -1;           
}
int main(){
   int arr[]={10,20,30,40,50},key;
   printf("enter elment to find : ");
   scanf("%d",&key);
   int result=bin_search(arr,5,key);
   if(result!=-1)
      printf("element is found at %d index",result);
   else
      printf("element is not found");
   
   return 0;
 }
