void sort012(int a[], int n)
    {
        // code here 
        int i=0;
        int j=0;
        int k=n-1;
        while(i<=k){
            if(a[i]==0){
                int temp=a[j];
                a[j]=a[i];
                a[i]=temp;
                j+=1;
                i+=1;
            }
            else if(a[i]==2){
                int temp=a[k];
                a[k]=a[i];
                a[i]=temp;
                k-=1;
            }
            else{
                i+=1;
            }
        }
            
    }
