void swap_max(int x[],int l,int y){
  int largest = 0;
  int *t=&x[y];
  int *q;
  for(int i=y;i<l;i++){
   if(x[i]>largest){
    largest=x[i];
    q=&x[i];
    }
   else
    continue;
    }
    int n =*q;
    *q=*t;
    *t=n;
    }
  void ssort(int m[],int l){
   for(int i=0;i<l;i++)
    swap_max(m,l,i);
   }
