#include<stdio.h>/*bai 3 : nhap mot day so < 100 phan tu va sap xep theo thu tu
  tang dan , nhap them vao mot so va chen so moi vnhap vao dung vi tri
   */
int main(){
int a[100],i,n,k,x,j,t;
printf(" nhap so phan tu cua day n: = ");// huhu bai nay mk tu lm day // congratulation!!!
scanf("%d",&n);                          
for(i=0;i<n;i++)
{
	printf("a[%d]",i+1);
	scanf("%d",&a[i]);}
printf(" day da nhap la ");
for(i=0;i<n;i++)
 	printf("\n%d",a[i]);
for(i=0;i<n;i++)
   for(j=0;j<=i;j++){
   	   if(a[i]<a[j])
   	   { t=a[j];
   	   	 a[j]=a[i];
   	   	 a[i]=t;
		  }	  
   }
   printf(" nhap so can nhap them x=  ");
   scanf("%d",&x);
   printf(" vi tri can chen so x la ");
   scanf("%d",&k);
   for(i=n;i>k-1;i--)
       a[i]=a[i-1];
       a[k-1]=x;
       n++;
       
    printf(" day sau khi sap xeo va chen la  ");
	for (i=0;i<n;i++)
	printf(" %d",a[i]);
	   

return 0;}

