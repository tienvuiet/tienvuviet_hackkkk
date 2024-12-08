#include<stdio.h>
int main(){
    int a[]={23,2,32,232,1};
    int n=sizeof(a)/sizeof(a[0]);
    Bubble Sort :xap xep noi bot
    for(int i=0;i<n-1;i++){
    	for(int j=0;j<n-i-1;j++){
    		if(a[j]>a[j+1]){
    			int temp=a[j];
    			a[j]=a[j+1];
    			a[j+1]=temp;
			}
		}
	}
	Selection Sort :xap xep chon
	    for(int i=0;i<n-1;i++){
    	int min=i;
    	for(int j=i+1;j<n;j++){
    		if(a[j]<a[min]){
    			min=j;
			}
		}
		int temp=a[min];
		a[min]=a[i];
		a[i]=temp;
	}
	Insertion Sort :xap xep chen
	for(int i=1;i<n;i++){
		int key=a[i];
		int j=i-1;
		while(j>=0&&key<a[j]){
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=key;
	}
	printf("mang sau khi duoc xap xep la: ");
    for(int i=0;i<n;i++){
    	printf("%d ", a[i]);
	}
	 tim kiem tuyen tinh - Linear search.
	int giatri, vitri;
	printf("nhap vao gia tri muon tim kiem: ");
	scanf("%d",&giatri);
	int vitri=-1;
	for(int i=0;i<n;i++){
		if(a[i]==giatri){
			vitri=i+1;
		}
	}
	if(vitri!=-1){
		printf("phan tu %d can tim o vi tri %d ",giatri, vitri);
	}else{
		printf("khong co phan tu nay trong mang");
	}
	Tim kiem nhi phân - Binary search
    int giatri;
	printf("\nnhap vao gia tri muon tim kiem: ");
	scanf("%d",&giatri);
	int start=0;
	int end=n;
	int mid;
	int dem=0; 
	while(start<=end){
		mid=(start+end)/2;
		if(a[mid]==giatri){
			printf("\nphan tu can tim o vi tri %d :",mid+1);
			dem=1;
			break;
		}else if(a[mid]>giatri){
			end=mid-1;
		}else{
			start=mid+1;
		}
	}
	if(!dem){
	printf("\nkhong tim thay phan tu nay trong mang");}
	
	return 0;
} 
