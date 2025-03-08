#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int i,j;
void selectionSort(int arr[10],int n){
for(i=0;i<n-1;++i){
int minIndex=i;
for(j=i+1;j<n;++j){
if(arr[j]<arr[minIndex]){
minIndex=j;
}
}
if(minIndex!=i){
int temp=arr[i];
arr[i]=arr[minIndex];
arr[minIndex]=temp;

}
}
printf("Sorted elements are\n");
for(i=0;i<n;i++){
printf("%d\t",arr[i]);
}
}
int main(){
int n;
printf("Enter the no.of elements:");
scanf("%d",&n);
int arr[n];
printf("Enter the elements\n");
for(i=0;i<n;++i){
scanf("%d",&arr[i]);
}
srand(time(NULL));
clock_t start=clock();
selectionSort(arr,n);
clock_t end=clock();
double time_taken=((double)(end-start))/CLOCKS_PER_SEC;
printf("Time taken for sorting:%fsecond\n",time_taken);
return 0;
}