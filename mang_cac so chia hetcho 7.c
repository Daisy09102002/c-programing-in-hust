#include<stdio.h>// nhap mang va dua ra trung binh cong cac so chia
// het cho 7
int main(){
int a[100],n,i,j=0;
printf(" nhap so phan tu cua mang :");// nho cach nhap mang
scanf("%d",&n);
		for(i=0;i<n;i++){
			printf("a[%d]  ",i);
			scanf("%d",&a[i]);}
		for(i=0;i<n;i++){
			if(a[i]%7==0)
				j++;}
	printf(" so phan tu chia het cho 7 la : %d",j);

return 0;
}

