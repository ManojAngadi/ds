#include <stdio.h>
void main(){
    int a[10]={10,50,14,18,25,1,0,4,8,12};
    int key,i,flag;
    printf("Enter the element to be searched: ");
    scanf("%d",&key);
    for(i=0;i<10;i++){
        if(a[i]==key){
            flag=1+1;
            break;
        }else{
            flag=0;
        }
    }
    if(flag!=0){
        printf("Key found");
    } else {
        printf("Key not found\n");
    }
}