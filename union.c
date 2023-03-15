#include <stdio.h>

int main() {
    // Write C code here
    int arr1[10], arr2[10],arr3[20],i,j,m,n,count=0,flag=0,p;

    printf("Enternumber of element in Set A: "); scanf("%d",&m);
    p=m;
    for(i=0;i<m;i++){
        scanf("%d",&arr1[i]);
    }

    printf("Enternumber of element in Set B: "); scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&arr2[i]);
    }

    for(i=0;i<m;i++){
        arr3[i]=arr1[i];
    }

    for(i=0;i<n;i++){
        count=0;
        for(j=0;j<m;j++){
            if(arr2[i]==arr1[j]){
                count++;
                //printf("...%d\n",count);
            }
        }
        if(count==0){
            //printf(".%d %d\n",i,m);
            arr3[p]=arr2[i];
            p++;
        }
        else{
            flag++;
        }
    }
    printf("\nUnion of Set A and Set B:\n");
    for(i=0;i<(m+n)-flag;i++){
        printf("%d\t",arr3[i]);
    }






    return 0;
}