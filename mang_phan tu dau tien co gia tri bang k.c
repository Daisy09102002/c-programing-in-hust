#include<stdio.h>
/* tim kiem cac phan tu thoa man dieu kien
- tim mkiem phan tu dau tien cua mang co gia tri bang k
c1 dung for loop: khi dung vong lap for thi se ket hop vs break vi
ngay sau khi tim dk phan tu bang k se dung ctirnh
c2: while loop  */
int main(){
int a[100],i , j ,k=4,n ;
printf(" nhap so phan tu cua mang  ");
scanf("%d",&n);
  for(i=0;i<n;i++)
  {
	  printf(" a[%d]",i);
  	scanf("%d",&a[i]);}
  for(i=0;i<n;i++)
  	if(a[i]==k) 
  	break;

  	 printf(" phan tu dau tien bang %d la a[%d]",k,i);

return 0;
}

/* neu dung while loop 
int a[100],i=0,f=0;
while(i<n&& f=0)
    if(a[i]==k)
    f=1;
    else i++;
}
if(f==1) printf(" tim thay phan tu dau tien bang %d tai vi tri %d",k,i);
*/
