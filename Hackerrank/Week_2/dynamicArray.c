#include <stdio.h>
#include<stdlib.h>
int main(){
    int n,q;
    scanf("%d%d",&n,&q);
     int **arr = malloc(n * sizeof(int *)); 
    int *s = calloc(n, sizeof(int));   
    for (int i = 0; i < n; i++)
        arr[i] = malloc(1000 * sizeof(int)); 
    int lans=0;
    while(q--){
        int query,x,y;
        scanf("%d %d %d",&query,&x,&y);
        int idx=((x^lans)%n);
        if(query==1){
            arr[idx][s[idx]++]=y;
        }
        else if(query==2){
            lans=arr[idx][y% s[idx]];
            printf("%d\n",lans);
        }
    }
for (int i = 0; i < n; i++)
        free(arr[i]);
    free(arr);
    free(s);
}
