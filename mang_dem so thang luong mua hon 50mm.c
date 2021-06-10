#include<stdio.h>// dem so phan tu tho man dieu kien
// dem som thang co luong mua lon hon 50mm
int main(){
int arr[20],i,n, count=0;
printf("Nhap so phan tu cua mang  :");
scanf("%d",&n);
for (i=0;i<n;i++){// luc nay minh viet dau ; o sau for nen chuong trinh k chay
		printf(" NHAP PHAN TU arr[%d]",i);
		scanf("%d",&arr[i]);}
		
for(i=0;i<n;i++){
		if(arr[i]>50)
		count++;}
		printf(" so thang co luong mua lon hon 50 mm la : %d",count);
return 0;
}

