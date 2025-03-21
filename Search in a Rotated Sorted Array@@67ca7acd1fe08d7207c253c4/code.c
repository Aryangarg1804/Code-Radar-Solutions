
int searchInRotatedArray(int arr[],int n,int target){
    int st = 0,end = n-1;
    while(st<=end){
        int mid = st + (end - st)/2;
        if(target == arr[mid]){
            return mid;
        } 
        if(arr[0]<arr[mid]){
            end = mid -1;
        } else{
            st = mid +1;
        }
    }
}