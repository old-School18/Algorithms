class Maxheap{
    int *arr; 
    int cap;  
    int size;
    Maxheap(int capacity); //constructor
    void Buildheap();
    int parent(int i) return (i-1)/2<=size?(i-1)/2:-1;
    int leftchild(int i)  return (2*i+1)<=size?(2*i+1):-1;
    int rightchild(int i)  return (2*i+2)<=size?(2*i+2):-1;
    int getmax() { return arr[0]; }
    int getmin();
    void heapify(int);
    void insertkey(int k);
    void resizeheap();
    void deletenode(int k);
};
Maxheap::Maxheap(int capacity){
    int cap=capacity;
    size=0;
    arr=new (long long int)[cap];
}

void Maxheap::Buildheap(){
   int k;
   for(int i=0;i<n;i++){
      cin>>k;
      arr[i]=k;
   }
   for(int i=n/2-1;i>=0;i--)
        heapify(arr, n, i); 
}

void Maxheap::heapify(int i)   {
    int l=leftchild(i);
    int r=rightchild(i);
    int maxr=i;
    if(l!=-1&&arr[l]>arr[maxr]) maxr=l;
    if(r!=-1&&arr[r]>arr[maxr]) maxr=r;
    if(maxr!=i)
    {
        int temp=harr[i];
        harr[i]=harr[maxr];
        harr[maxr]=harr[i];

    heapify(maxr);
    }

}
