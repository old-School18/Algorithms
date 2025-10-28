Modified Quickselect algorithm using Median of medians algorithm to solve kth order statistics in linear time. Remember this is useful for kth stats and not k stats. (k stats is when k  smallest elements etc kinda  questions are asked instead of k th smallest element etc).

lld median(lld a[],lld n){
    sort(a+s,a+n);
    
    return a[n/2];
}
lld partition(lld arr[],lld l,lld r,lld p){
    lld i;
    for(i=l;i<r;i++){
        if(a[i]==p){
            break;
        }
    }
    swap(a[i],a[r]);
    i=l;
    for(lld j=l;j<=r;j++){
        if(a[j]<p){
            swap(a[i++],a[j]);
        }
    }
    swap(a[r],a[i]);
    return i;
}
lld quickselect_medOfmed(lld a[],lld l,lld r,lld k){
    if(k<l||k>r) return -1;
    
    lld n=r-l+1;
    lld med[(n+4)/5]; //each bucket of size 5 elements
    lld i;
    for(i=0;i<(n+4)/5;i++){
        med[i]=median(a+l+i*5,5);
    }
    if(i*5<n){
        med[i]=median(a+l+i*5,n%5);
        i++;
    }
    lld medofmed=(i==1)?med[i-1]:quickselect_medOfmed(med,0,i-1,i/2);
    
    lld pos=partition(a,l,r,medofmed);
    
    if(pos-l==k-l)  return a[pos];
    if(pos-l>k-l)
       return quickselect_medOfmed(a,l,pos-1,k);
    else
      return quickselect_medOfmed(a,pos+1,r,k-pos+l-1);
      
}
