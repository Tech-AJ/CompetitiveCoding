#include <stdio.h>

void swap(int arr[],int i,int j){
      
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
   
}


int partition(int arr[],int p,int r){
    int x=arr[r];   //pivot
    int i=p-1;
    for(int j=p;j<=r-1;j++){
        if(arr[j]<=x)
        {
            i=i+1;
            swap(arr,i,j);
        }
        
    }
    swap(arr,i+1,r);
    return i+1;
}


void quicksort(int arr[],int p,int r){
    
     int q;
     if(p<r){
    int q =partition(arr,p,r);
    
    quicksort(arr,p,q-1);
    quicksort(arr,q+1,r);
     }
}


void printArray(int arr[], int n)
{
	for (int i=0; i<n; ++i)
		printf("%d\t",arr[i]);
	printf("\n");
}



int main()
{
	int arr[] = {12, 11, 13, 5, 6, 7};
	int n = sizeof(arr)/sizeof(arr[0]);

	quicksort(arr,0,n-1);

	printf( "Sorted array is");
	printArray(arr, n);
	return 0;
}
