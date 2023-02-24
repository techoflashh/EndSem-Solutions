#include<stdio.h>
void permute(int n,int k,int len,int* comb,int arr[n]){
    if (len==k){
        for (int i=0;i<k;i++){
            printf("%d ",comb[i]);
        }
        printf("\n");
        return;
    }
    else{
        for (int i=0;i<n;i++){
            comb[len] = arr[i];
            permute(n,k,len+1,comb,arr);
        }
    }
}

int main(){
    int n,k;
    scanf("%d %d",&n,&k);
    int arr[n];
    int comb[k];
    for (int i=0;i<n;i++){
        arr[i] = i+1;
    }
    permute(n,k,0,comb,arr);
    return 0;
}
