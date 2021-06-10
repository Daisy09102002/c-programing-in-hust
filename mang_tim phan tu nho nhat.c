#include<stdio.h>// tim kiem phan tu nho nhat trong mang
int main(){
int a[100],n,i,min;
printf(" nhap so phan tu cua mang  ");
scanf(" %d",&n);
 	for(i=0;i<n;i++){
 		printf("a[%d]",i);
 		scanf("%d",&a[i]);}
 		min=a[0];
 	for(i=0;i<n;i++)
 		if(a[i]<min)
 		min=a[i];
 	printf(" so nho nhat day la  %d", min);


return 0;
}

