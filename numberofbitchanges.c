int minChanges(int n, int k) {
    int g=0;
    int s=0;
    int count=0;
    int count2=0;
    int a[100];
    int b[100];
    for(int i=n;i>0;i=i/2){
        a[g]=i%2;
        g+=1;
    }
    for(int i=k;i>0;i=i/2){
        b[s]=i%2;
        s+=1;
    }
    while(s!=g){
        if(s>g){
            a[g+1]=0;
            g+=1;
        }
        else{
            b[s+1]=0;
            s+=1;
        }
    }
    for(int i=0;i<s;i++){
        if(a[i]!=b[i]&&a[i]==1){
            count+=1;
            a[i]=0;
        }
    }
    for(int i=0;i<s;i++){
        if(a[i]==b[i]){
            count2+=1;
        }
    }
    if(count2==s){
        return count;
    }
    else{
        return -1;
    }
}
