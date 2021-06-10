#include<stdio.h>// chen so vao mang
int main(){     /*bai 4 : nhap vao mot day < 100 phan tu ; xao di cac phan tu chia het cho 5
va dua ket qua ra man hinh */
int a[100 ],i,n;
//printf(" nhap so phan tu cua mang N= : ");
//scanf("%d",&N);if (N<0||N>100) printf(" error");
/*vi de bai yeu cau nhap vao mot day co so phan tu nho hon 100 nen dung do while nhe, neu de 
bai yeu cau nhap vao day nho hon 100 va neu nhap sai thi hien error luc do minh dung lenh 
 for roi dung if nhe */
 do {
 	printf(" nhap so phan tu cua day n=  ");
 	scanf("%d",&n);}
while(n<=0||n>100);
  for(i=0;i<n;i++)
  	{printf("a[%d] ",i+1);
  	scanf("%d",&a[i]);
  }
printf(" day da nhap :");
for(i=0;i<n;i++)
printf("%4d",a[i]);
{
int d=0;
for(i=0;i<n;i++)
    if(a[i]%5!=0){
    	a[d]=a[i];
    	d++;
	}
 n=d;
 printf(" \n day sau khi xoa :");
 for(i=0;i<n;i++)
 printf(" %4d",a[i]);
 return 0;
 
	 

}}

