#include<stdio.h>
#include<math.h>
int main() {
    int a[100]; 
    int n = 0;  
    int luachon;
    while (1) {
		printf("\n            MENU\n");
		printf("1.nhap vao so phan tu va gia tri cua mang\n");
		printf("2.in ra gia tri cua cac phan tu mang\n");
		printf("3.dem so luong cac so nguyen to co trong mang\n");
		printf("4.tim gia tri nho thu hai trong mang\n");
		printf("5.them mot phan tu vao vi tri ngau nhien trong mang, phan tu them va vi tri do nguoi dung nhap\n");
		printf("6.xoa mot phan tu tai vi tri cu the\n");
		printf("7.xap xep mang theo thu tu giam dan(insertion short)\n");
		printf("8.yeu cau nguoi dung nhap vao mot phan tu kiem tra phan tu do co trong mang khong(Binary search)\n");
		printf("9.xoa toan bo phan tu trung lap trong mang, hien thi toan bo phan tu doc nhat co trong mang\n");
		printf("10.dao thu tu cac phan tu co trong mang\n");
		printf("11.thoat\n");
		printf("moi bang nhap lua chon: ");
		scanf("%d",&luachon);
        switch (luachon) {
            case 1: {
                printf("So phan tu muon nhap vao: ");
                scanf("%d", &n);
                if (n < 0 || n > 100) {
                    printf("So phan tu khong hop le!\n");
                    n = 0; 
                } else {
                    for (int i = 0; i < n; i++) {
                        printf("a[%d] = ", i);
                        scanf("%d", &a[i]);
                    }
                }
                break;
            }

            case 2: {
                if (n == 0) {
                    printf("Mang chua duoc nhap! nhap lai\n");
                } else {
                    printf("Mang hien tai la: ");
                    for (int i = 0; i < n; i++) {
                        printf("a[%d]=%d ", i,a[i]);
                    }
                    printf("\n");
                }
                break;
            }
            case 3: {
                if (n == 0) {
                    printf("Mang chua duoc nhap! nhap lai\n");
                } else {
                  	printf("cac so nguyen to trong mang la: ");
					int dem1=0;  
					for(int i=0;i<n;i++){
						int dem =1;
						if(a[i]<2){
							dem=0;
						}else{
							for(int j=2;j<sqrt(a[i]);j++){
								if(a[i]%j==0){
									dem=0;
									break;
								}
							}
						}
						if(dem==1){
							dem1++;
						}
						if(dem=0){
						printf("mang da cho khong chua so nguyen to");
					}
					}
					printf("so luong so nguyen to co trong mang la: %d",dem1);
					
                }
                break;
            }
            case 4: {
                if (n == 0) {
                    printf("Mang chua duoc nhap! nhap lai\n");
                }else{
						int mot=-1;
						int hai=-1;
						int i;
						int dem;int min=a[0];
					for(i=0;i<n;i++){
					
						if(a[i]<min){
							dem=min;
							min=a[i];
						}
					}
					printf("gia tri nho thu 2 trong mang la:%d", dem);
				}
                break;
            }
			case 5:{
			if(n==0){
				printf("mang chua duoc nhap! nhap lai\n");
			}else{
			int giatri, vitri;
        	printf("nhap vao gia tri muon them: ");
        	scanf("%d", &giatri);
        	printf("nhap vao vi tri muon them: ");
        	scanf("%d", &vitri);
        	if (vitri < 1 || vitri > n + 1) {
            printf("Vi tri khong hop le!\n");
            break ;
            }
         	for(int i=n;i>=vitri;i--){
     		a[i]=a[i-1];
         	}
     	    a[vitri-1]=giatri;
    	    n++;
            printf("mang sau khi them la: ");
            for(int i=0; i<n;i++){
         	printf("%d ",a[i]);
         	}
         }
				break;
			}
			case 6: {
				if(n==0){
					printf("mang chua duoc nhap ! nhap lai\n");
				}else{
			        int vitri;
                    printf("Nhap vao vi tri muon xoa (1 -> %d): ", n);
                    scanf("%d", &vitri);
                    if (vitri < 1 || vitri > n) {
                        printf("Vi tri khong hop le!\n");
                    } else {
                        for (int i = vitri - 1; i < n - 1; i++) {
                            a[i] = a[i + 1];
                        }
                        n--;
                        printf("Xoa phan tu thanh cong!\n");
                    }
                    printf("mang sau khi xoa la:");
                    for(int i=0;i<n;i++){
                    	printf("%d ",a[i]);
					}
				}
				break;
			}
			case 7:{
				if(n==0){
					printf("mang chua nhap gia tri ! nhap lai\n");
				}else{
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
    for(int i=n-1;i>=0;i--){
    	printf("%d ", a[i]);
	}
			}
				break;
			}
			case 8:{
				if(n==0){
					printf("mang chua nhap gia tri ! nhap lai\n");
				}else{
				int giatri;
				printf("gia tri muon tim kiem la:");
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
				break;
			}
		    case 9:{
		    	if(n==0){
				printf("mang chua nhap gia tri ! nhap lai\n");
				}else{
					
				}
				break;
			}
			case 10:{
				for(int i=0;i<1;i++){
					for(int j=n-1;j>=i;j--){
						int temp=a[i];
						a[j]=a[i];
						a[i]=temp;
						i++;
						if(i==j){
							break;
						}
					}
				}
				printf("mang sau khi duoc dao lai la: ");
				for(int i=0;i<n;i++){
					printf("%d ",a[i]);
				}
				break;
			}
            case 11:{
                printf("da thoat chuong trinh\n");
                return 0;
            }

            default:
                printf("Lua chon khong hop le! Vui long nhap lai.\n");
                break;
            }
        }
    }
			return 0;
    }
