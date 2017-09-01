#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>
/*
 * Complete the function below.
 */
unsigned int getFirstSetBitPos(int n)
{
   return log2(n&-n)+1;
}
int maxXor(int l, int r) {

    /*int tmpl = l, tmpr = r,countl = 0, countr = 0;
    while(tmpl != 0){
        tmpl >> 1;
        countl++;
    }
    
    while(tmpr != 0){
        tmpr >> 1;
        countr++;
    }
    if(countr == countl){
        max = 1<< (countr-1)
    }*/
    
    int max = l ^ r;
    int i,temp;
    i = temp = max;
    while(temp >> 1){
        temp = (i >> 1);
        max |= temp;
        i = i>>1;
    }
    /*int bitPos = getFirstSetBitPos(max);
    printf("bitPos : %d\n",bitPos);
    max = 0;
        for(int i = 0 ;i < bitPos; i++){
        max = ( max | 0x1) << 1;
    }*/
    return max;
}
int main() {
    int res;
    int _l;
    scanf("%d", &_l);
    
    int _r;
    scanf("%d", &_r);
    
    res = maxXor(_l, _r);
    printf("%d", res);
    
    return 0;
}