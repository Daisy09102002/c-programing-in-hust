#include<stdio.h>//XUAT DU LIEU TRONG MANG 
int main(){
#define max 5  

	int a[max] ,i ; 
	for(i=0;i<max ;i++){
		printf("a[%d]   ",i); 
		scanf("%d",&a[i]);}
		printf("\n"); 
		
		
		
	for (i=0;i<max;i++)
		printf("%d ",a[i]); 
	printf("\n");	
		
	for(i=0;i<max;i++)
		printf("%d\n",a[i]); 
		printf("\n");
	for(i=0;i<max;i++){
	
	
	    printf("%4d",a[i]);
	    if ((i+1)%3==0)printf("\n") ;}
		 
 return 0;}


