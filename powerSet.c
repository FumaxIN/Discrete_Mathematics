#include "stdio.h"
#include "string.h"
int generate(char a[],int m){
    char op[10] = " ";
    char op1[10] = "";
    char op2[10] = "";
    if(strlen(a)==0){
        printf("%s",op);
        return 0;
    }
    strcpy(op1,op);
    strcpy(op2,op);
    strcpy(op2[strlen(op2)+1],a[0]);
    for(int j=0;j!=strlen(a)-1;j++){
        a[j]=a[j+1];
    }


}

int main(){
    char arr[10];
    int subset[100],oiwset[200],arr4[40],i,j,m,n,count=0,flag=0, z=0, intersect_size,c=0;
//    printf("Enter number of element in Set A: "); scanf("%d",&m);
//    for(i=0;i<m;i++){
    scanf("%s",arr);
    m=strlen(arr);
//    }
    generate(arr,m);
}