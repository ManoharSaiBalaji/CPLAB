#include<stdio.h>
int linear(int arr[],int size,int key){
    int i;
    for(i=0;i<size;i++){
       if(key==arr[i])
         return i;
    }
    return -1; 
}
int main(){
   int arr[]={10,20,30,40,50},key;
   printf("enter elment to find : ");
   scanf("%d",&key);
   int result=linear(arr,5,key);
   if(result!=-1)
      printf("element is found at %d index",result);
   else
      printf("element is not found");
   
   return 0;
 }     
