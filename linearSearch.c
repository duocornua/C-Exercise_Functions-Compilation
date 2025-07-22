#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int linear_search(int search, int key[], int size){
    int i, rc=-1;
    for(i=0; i< size && rc == -1; i++){
        if(search==key[i]){
            rc=i;
        }
    }
    return rc;
}

int main(){
    int key[]={12,3,2,5,-1,7,8,2};
    int size=8,rc,search;
    printf("Enter you search value: ");
    scanf("%d", &search);
    rc = linear_search(search,key,size);
    if(rc==-1){
        printf("Couldn't find you search value in the key array");
    }
    else printf("The position of your search value: %d ", rc);

    return 0;
}
