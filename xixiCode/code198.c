#define max(a,b) a>b?a:b

int rob(int num[], int n) {
    int r[100]={0},i;
    if(!*num&&!*++num)
    return 0;
    r[0]=num[0];
    r[1]=max(r[0],num[1]);
    for(i=2;i<n;i++)
        r[i]=max(r[i-1],num[i]+r[i-2]);
    return r[n-1];
         
    
        
    
    
}