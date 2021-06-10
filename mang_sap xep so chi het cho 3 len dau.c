#include<stdio.h>
int main(){
int a[100],n,i, dem=0,t;
printf( " nhap so phan tu cua mang  ");
scanf(" %d",&n);
for (i=0;i<=n-1;i++){
   printf("a[%d] ",i+1);
   scanf("%d",&a[i]);}
   printf("\n");

 printf(" in day da nhap\n  ");
 for(i=0;i<=n-1;i++)
  printf(" %4d",a[i]);
for(i=0;i<=n-1;i++)// tim cac so chan chi het cho 3 
  if(a[i]%6==0){
  	t=a[dem];// doi vi tri 
  	a[dem]=a[i];
  	a[i]=t;
  	dem++; 
  }
  for(i=dem;i<=n-1;i++)
   if (a[i]%3!=0){
    t =a[dem];
	a[dem]=a[i];
	a[i]=t;
	dem++;}
	printf(" \nin lai day da sap xép theo yeu cau\n ");
	for(i=0;i<n;i++)
	 printf(" %4d",a[i]);
	  
return 0;
}

