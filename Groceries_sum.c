#include <stdio.h>
int sum(int* ptr,int n){
    if(n==0){
        return 0;        
    }
    else{
        int temp=*ptr;
        return temp+sum(ptr+1,n-1);
    }
}
int main() {
    int grocery[10];
    int n=10;
    int *ptr=grocery;
    for(int i=0;i<n;i++){
        printf("Enter the cost of grocery %d:",i+1);
        scanf("%d",&grocery[i]);
    }
    int c=sum(ptr,n);

    printf("The total sum of all groceries is :%d",c);

    return 0;

}
