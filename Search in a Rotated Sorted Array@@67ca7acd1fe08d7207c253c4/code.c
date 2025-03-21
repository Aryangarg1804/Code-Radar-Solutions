
int searchInRotatedArray(int arr[],int n,int target){
    int st = 0,end = n-1;
    while(st<=end){
        int mid = st + (end - st)/2;
        if(target == arr[mid]){
            return mid;
        } 
        if(arr[st]<arr[mid]){
            if(arr[st] <= target && target >= arr[mid]){
                end = mid - 1;
            } else{
                st = mid +1;
            }
        } else{
            if(arr[st] <= target && target >= arr[mid]){
                st = mid+1;
            } else{
                end = mid -1;
            }
        }
    }
}