#include<stdio.h>

#ifndef LIJUN
unsigned short getbit(unsigned short v, int n1, int n2){
    unsigned short t,s,r,n;
    n=sizeof(v)*8;
    t=v >> (n-n2-1); 
    s=~(((unsigned short)~0) << (n2-n1+1));
    r=t&s;
    return r;
}

unsigned short getbit2(unsigned short v){
    unsigned short t, r;
    t=0x5555;
    r=v&t;
    return r;
}

unsigned short getbit3(unsigned short v, int n){
    unsigned short t;
    if(n>0){
        t= v<<(sizeof(v)*8 -n);
        t= t | v>>n;
    }
    else{
        t=v>>(sizeof(v)*8 - -n);
        t=t| v<< (-n);
    }
    return t;
}

main()
{
    unsigned short i=57259;
    printf("%u\n",getbit(i,5,8));
    printf("%u\n",getbit2(i));
    printf("%u\n",getbit3(i,3));
    printf("%u\n",getbit3(i,-3));
}

#endif