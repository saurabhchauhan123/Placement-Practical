#include<stdio.h>

int main(){
  int A[]={5,2,3,4,1};
   int  n=5;
  Insertionsort(A,n);
  for(int i=0;i<n;i++){
    printf("%d ",A[i]);
  }
}


void Insertionsort(int arr[],int n){
   int temp,j;
   for(int i=1;i<n;i++){
        temp=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>temp){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
   }
}

