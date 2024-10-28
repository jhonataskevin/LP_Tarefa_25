#include <stdio.h>

int main(){
    
    int X[10], i, v;
    float ;
    
    for(i=0; i<10; i++){
    
        scanf("%d", &v);
        if(v<=0){
            X[i]=1;
        }else{
        	X[i]=v;
    	}
        printf("X[%d] = %d\n", i, X[i]);
    }
    return 0;
    }
