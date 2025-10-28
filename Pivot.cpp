lld findPivot(lld arr[],lld low,lld high)
{
   if(high<low)   return -1;
   if(high==low)   return low;

   lld mid=(low+high)/2;
   if(mid<high&&arr[mid]>arr[mid+1])
      return mid;

   if(mid>low&&arr[mid]<arr[mid-1])
      return (mid-1);

   if(arr[low]>=arr[mid])
      return findPivot(arr,low,mid-1);

   return findPivot(arr,mid+1,high);
}
