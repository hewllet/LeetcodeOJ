int hammingWeight(uint32_t n) {
    int bin[32]={0},i=0,count=0;
    while(n){
       
        bin[i]=n%2;
         n=n/2;
        if(bin[i]==1)
        count++;
        i++;
        
    }
    return count;
}