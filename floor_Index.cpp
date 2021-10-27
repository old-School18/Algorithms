 lld floorIndex(lld arr[], lld low, lld high,lld  x) 
{ 
  if (low > high) 
    return -1; 
  if (x >= arr[high]) 
    return high; 
  lld mid = (low+high)/2; 
  if (arr[mid] == x) 
    return mid; 

  // If x lies between mid-1 and mid 
  if (mid > 0 && arr[mid-1] <= x &&  arr[mid]>x) 
    return mid-1; 
  // If x is smaller than mid, floor must be in 
  // left half. 
  if (x < arr[mid]) 
    return floorIndex(arr, low, mid-1, x); 

  // If mid-1 is not floor and x is greater than 
  // arr[mid], 
  return floorIndex(arr, mid+1, high, x); 
} 
