#include <math.h>
bool isPowerOfFour(int n) {
    int count=0;
    for(int i=n;i>1;i=i/4){
        if(i%4==0){count+=1;}
    }
    if(pow(4,count)==n){return true;}
    else{return false;}
}
