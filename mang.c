#include<stdio.h>// cau truc du lieu va giai thuat 
int main(){
int a[100],i, n,j,t;
printf(" so phan tu cua mang la ") ;
scanf("%d",&n) ;
for(i==0; i<=n-1 ;i++)
  {
  printf("a[%d]  ",i+1);
  scanf("%d",&a[i]);}
  
for (i=0;i<=n-1;i++){

   for(j=0;j<=i ; j++)
      if (a[i]>a[j ]) {
	  
        t=a[i];
		a[i]=a[j];
		a[j]=t;
	}
	printf("\n luot %d  ",i+1);
	for(j=0;j<n;j++)
	printf("%4d ",a[j]);
  }

return 0;
}

