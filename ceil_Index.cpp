lld ceilIndex(lld arr[], lld low, lld high,lld  x) 
{ 
  if (low > high) 
    return -1; 
  if (x <= arr[low]) 
    return low; 
  lld mid = (low+high)/2; 
  if (arr[mid] == x) 
    return mid; 

  // If x lies between mid-1 and mid 
  if (mid > 0 && arr[mid] < x &&  arr[mid+1]>=x)
    return mid+1; 

  // If x is smaller than mid, floor must be in 
  // left half. 
  if (x < arr[mid]) 
    return ceilIndex(arr, low, mid-1, x); 

  // If mid-1 is not floor and x is greater than 
  // arr[mid], 
  return ceilIndex(arr, mid+1, high, x); 
} 
