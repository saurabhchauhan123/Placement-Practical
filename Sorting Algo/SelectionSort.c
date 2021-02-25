#include<stdio.h>

int main(){
  int A[]={5,2,3,4,1,6};
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
    int temp,index;
    for(int i=0;i<n-1;i++){
        temp=A[i];
        index=i;
        for(int j=i+1;j<n;j++){
            if(A[j]>temp){
                temp=A[j];
                index=j;
            }
        }
        swap(&A[i],&A[index]);
    }
}

