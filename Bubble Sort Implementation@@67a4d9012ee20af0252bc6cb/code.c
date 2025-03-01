int* bubbleSort(int arr[],int n){
    int swapped=0;
    int* arr = (int*)malloc(n * sizeof(int));
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                swapped=1;
            }
        }
        if(!swapped)break;
    }
    return arr;
}