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


int kthSmallest(int arr[], int l, int r, int k)
{
    // If k is smaller than number of elements in array
    if (k > 0 && k <= r - l + 1)
    {
       
      /*  int pos = partition(arr, l, r);
 
         if (pos-l == k-1)
            return arr[pos];
        if (pos-l > k-1)  
            return kthSmallest(arr, l, pos-1, k);             // recursive approach
 
        
        return kthSmallest(arr, pos+1, r, k-pos+l-1);
        */
        do{
             int pos = partition(arr, l, r);
 
       
            if (pos == k-1)
            return arr[pos];                           // iterative approach
            if (pos > k-1)  
            r= pos-1;
            else l=pos+1;
            
        }while(1);
    }
 
    // If k is more than number of elements in array
    return -1;
}
void printArray(int arr[], int n)
{
	for (int i=0; i<n; ++i)
		printf("%d\t",arr[i]);
	printf("\n");
}



int main()
{
	int arr[] = {12, 11, 13, 5, 6, 7,4};
	int n = sizeof(arr)/sizeof(arr[0]);
    int key=1;
    
int a=	kthSmallest(arr,0,n-1,key);

	printf("%d",a);

	return 0;
}
