#include <stdio.h>
long long int summer(int size,long long int arr[size],int start,int stop){
    long long int sum=0;
    for (int i=start;i<=stop;i++){
        sum+=arr[i];
    }
    return sum;
}

int main(){
    long long int max_sum = -1000000000; 
    int no_of_elements;
    scanf("%d",&no_of_elements);
    long long int array[no_of_elements];
    for (int v=0;v<no_of_elements;v++){
        scanf("%lld",&array[v]);
    }
    for (int i=0;i<no_of_elements;i++){
        for (int j=i;j<no_of_elements;j++){
            long long int temp = summer(no_of_elements,array,i,j);
            if (temp>max_sum){
                max_sum = temp;
            }
        }
    }
    printf("%lld\n",max_sum);
    return 0;
}
