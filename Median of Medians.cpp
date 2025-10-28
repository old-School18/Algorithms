Can be used as an alternative for pivot in Quicksort algorithm (Worst case linear time Quick select algoirithm).

lld median(lld a[],lld n){
    sort(a+s,a+n);
    
    return a[n/2];
}
lld medOfmed(lld a[],lld l,lld r){
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
    lld medofmed=(i==1)?med[i-1]:medOfmed(med,0,i-1,i/2);
    
    return medofmed;
}
