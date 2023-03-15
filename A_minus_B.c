#include <stdio.h>

int main() {
    // Write C code here
    int arr1[10], arr2[10],arr3[20],i,j,m,n,count=0,flag=0,p=0;

    printf("Enter number of element in Set A: "); scanf("%d",&m);
    //p=m;
    for(i=0;i<m;i++){
        scanf("%d",&arr1[i]);
    }

    printf("Enternumber of element in Set B: "); scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&arr2[i]);
    }


    for(i=0;i<m;i++){
        count=0;
        for(j=0;j<n;j++){
            if(arr1[i]==arr2[j]){
                count++;
            }
        }
        if(count==0){
            arr3[p]=arr1[i];
            p++;
        }
    }
    printf("\nIntersection of Set A and Set B: ");
    for(i=0;i<p;i++){
        printf("%d\t",arr3[i]);
    }
    return 0;
}