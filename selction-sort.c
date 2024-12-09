#include <stdio.h>
  
void tri_selection_ite(int arr[],int n){

int i,j,k;
int X;

  for (i=0;i<n-1;i++) {
    k=i;
    for (j=i+1;j<n;j++) {
      if (arr[j]<arr[k]) {
        k=j;
      }
    }
    X=arr[k];
    arr[k]=arr[i];
    arr[i]=X;
    
  }
  // too tierd to make a render func
  for (int i=0;i<n;i++) {
    printf("%d\n",arr[i]);
  }
}



int main()
{ 
  // test array
int arr[]={3,4,6};
  // size of array 
int n=sizeof(faveNumbers/sizeof(faveNumbers));
tri_selection_ite(arr,n);
  return 0;
}
