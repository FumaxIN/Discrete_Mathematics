#include <stdio.h>

int main() {
    // Write C code here
    int arr1[10], arr2[10],arr3[20],arr4[40],i,j,m,n,count=0,flag=0,p=0, z=0, intersect_size;

    printf("Enter number of element in Set A: "); scanf("%d",&m);
    //p=m;
    for(i=0;i<m;i++){
        scanf("%d",&arr1[i]);
    }

    printf("Enternumber of element in Set B: "); scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&arr2[i]);
    }

//    for(i=0;i<m;i++){
//        arr3[i]=arr1[i];
//    }

    for(i=0;i<n;i++){
        count=0;
        for(j=0;j<m;j++){
            if(arr2[i]==arr1[j]){
                count++;
                //printf("...%d\n",count);
            }
        }
        if(count!=0){
            //printf(".%d %d\n",i,m);
            arr3[p]=arr2[i];
            p++;
        }
    }
    printf("\nIntersection of Set A and Set B: ");
    for(i=0;i<p;i++){
        printf("%d\t",arr3[i]);
    }
    //intersect_size = sizeof(arr3)/4;
    //printf("\n Intersection size = %d \n",intersect_size);


    for(i=0;i<m;i++){
        count=0;
        for(j=0;j<p;j++){
            if(arr1[i]==arr3[j]){
                count++;
            }
        }
        if(count==0){
            //printf("\n.%d.",arr1[i]);
            arr4[z]=arr1[i];
            z++;
        }
    }

    for(i=0;i<n;i++){
        count=0;
        for(j=0;j<p;j++){
            if(arr2[i]==arr3[j]){
                count++;
            }
        }
        if(count==0){
            //printf("\n..%d..",arr2[i]);
            arr4[z]=arr2[i];
            z++;
        }
    }

    printf("\nSymmetric Diff of of Set A and Set B: ");
    for(i=0;i<z;i++) {
        printf("%d,", arr4[i]);
    }
    return 0;
}