#include<stdio.h>
int main(){
    int i,j,k,o;
    scanf("%d",&j);
    for(i=1;i<=j;i++){
        scanf("%d %d",&k,&o);
        if((k-1)%(o-1)!=0){
            printf("cannot do this\n");
        }
        else{
            printf("%d\n",(k-1)/(o-1));
        }
    }
    return  0;
}
