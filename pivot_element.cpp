lld pivot(lld a[],lld low,lld high){
   if(low==high)
      return low;
   else if(high-low==1)
      if(a[low]>a[high])
         return low;
      else
         return high;
   else
   {
       lld mid=(low+high)/2;
       if(a[low]>=a[mid])
          return pivot(a,low,mid);
       else
          return pivot(a,mid,high);     
    }
}
