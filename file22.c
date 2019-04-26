#include<stdio.h>
 int abs2(int A){
     int a;
     if(A>=0){a=A;}else{a=-A;}
     return a;
}
int min(int n,int x[]){
    int y,i=0,j=0;
    y=x[0];
    while(i<n){
        if(x[i]<y){
            y=x[i];
            j=i;
        }
        i++;
    }
    return j+1;
}

int main(void){
    int N,T,A,h;
    float d;
    scanf("%d%d%d",&N,&T,&A);
    int H[N];
    for(int i=0;i<N;i++){
        scanf("%d",&H[i]);
    }
    for(int i=0;i<N;i++){
        d=H[i]*0.006;
        H[i]=abs2(A-T+(int)d);
    }
    printf("%d\n",min(N,H));
	return 0;
}
