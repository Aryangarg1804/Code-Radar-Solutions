int binarySearch(int arr[],int n,int target){
    int st = 0,end = n-1;
    while(st<=end){
        int mid = st + (end - st)/2;
        if(target < arr[mid]){
            end = mid - 1;
        } else if(target > arr[mid]){
            st = mid +1;
        } else{
            return mid;
        }
    }
    return -1;
}