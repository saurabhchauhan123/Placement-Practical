#include<stdio.h>

int main(){
  int A[]={5,2,3,4,1};
   int  n=5;
  sort(A,n);
  for(int i=0;i<n;i++){
    printf("%d ",A[i]);
  }
}

void swap(int *a,int *b){
   int temp=*a;
   *a=*b;
   *b=temp;
}
void sort(int A[],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(A[j]>A[j+1]){
                swap(&A[j],&A[j+1]);
            }
        }
    }
}
