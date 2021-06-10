#include<stdio.h>// nhap vap mot day so ; tim so chan nho nhat day
int main(){
int n,a[100],i, min;
printf(" nhap so phan tu cua day  ");
scanf(" %d",&n);
for(i=0;i<n;i++)
	{
	printf("a[%d]",i);
	scanf("%d",&a[i]);}
	for(i=0;i<n;i++)
	 if(a[i]%2==0){
	 min=a[i];
	 break;}
	
for(i=0;i<n;i++)
		if(a[i]%2==0 && a[i]<min)
		min=a[i];
		printf("so can tim la %d",min);
		return 0;
}

