#include <stdio.h>

int main(){
    
    int G[6][6]={{0,1,0,0,0,0},{0,0,1,1,0,0},{0,0,0,0,1,0},{0,0,1,0,1,0},{0,0,0,0,0,1},{0,0,0,0,0,0}};
    int L[5];
    int V[6]={0,1,2,1,2,1};
    int j,k,i;
    i=0;
    for(j=0;j<6;j++){
        if(V[j]==0){
            V[j]--;
            L[i]=j+1;
            i++;
        }
        for(k=0;k<6;k++){
            if(G[j][k]==1){
                V[k]--;
            }
        }
    }

    for(i=0;i<5;i++){
        printf("L[%d]=%d\n",i,L[i]);
    }
    
    return(0);
}