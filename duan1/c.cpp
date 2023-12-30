#include <iostream>
#include <math.h>

void nhap(int a[], int n){
    for(int i = 0; i < n;i++){
        scanf("%d", &a[i]);
    }
}

void tangdan(int a[], int n){
    int temp;
    for(int i = 0; i < n-1;i++){
        for(int j = i+1; j <n;j++){
            if(a[i] < a[j]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    for(int i = 0; i < n;i++){
        printf("%d ", a[i]);
    }
}

void giamdan(int a[], int n){
    int temp;
    for(int i = 0; i < n-1;i++){
        for(int j = i+1; j <n;j++){
            if(a[i] > a[j]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    for(int i = 0; i < n;i++){
        printf("%d ", a[i]);
    }
}

int main(){
	int n; scanf("%d", &n); 
    int a[n];

    nhap(a, n);
    tangdan(a, n);
    printf("\n");
    giamdan(a, n);
    return 0;
}