lld lastOccurence(lld arr[],lld low,lld high,lld data){
    if(high>=low){
        lld mid=(low+high)/2;
        if((mid==high&&arr[mid]==data)||(arr[mid]==data&&arr[mid+1]>data))
           return mid;
        else if(arr[mid]<=data)
           return lastOccurence(arr,mid+1,high,data);
        else
           return firstOccurence(arr,low,mid-1,data);
    }
    return -1;
}

