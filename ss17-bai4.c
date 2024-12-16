#include <stdio.h>
#include <math.h>

void addItem(int array[],int size);
void checkItem(int array[],int size);
void checkOneItem(int array[],int size);
int check(int n);
void reverseItem(int array[],int size);
void arrangeOneItem(int array[],int size);
void arrangeTwoItem(int array[],int size);
void findItem(int array[],int size);

int main(){
	int array[100],size,count=0,chose;
	do {
		printf("-----MENU-----\n");
		printf("1.nhap vao so phan tu va tung phan tu trong mang \n");
		printf("2.hien thi ra cac phan tu la so chan \n");
		printf("3.in ra cac phan tu la so nguyen to \n");
		printf("4.dao nguoc mang \n");
		printf("5.sap xep mang \n");
		printf("6.tim kiem phan tu trong mang \n");
		printf("7.thoat \n");
		scanf("%d",&chose);
		switch(chose){
			case 1:
				printf("nhap vao so phan tu ");
	            scanf("%d",&size);
	            array[100]=array[size];
	            count=1;
			    addItem(array,size);
				break;
			case 2:
				if (count==0){
					printf("ban chua nhap mang \n");
				} else {
					checkItem(array,size);
				}
				break;
			case 3:
				if (count==0){
					printf("ban chua nhap mang \n");
				} else {
					checkOneItem(array,size);
				}
				break;
			case 4:
				if (count==0){
					printf("ban chua nhap mang \n");
				} else {
					reverseItem(array,size);
				}
				break;
			case 5:
				if (count==0){
					printf("ban chua nhap mang \n");
				} else {
					int choose;
					printf("1.tang dan \n");
					printf("2.giam dan \n");
					scanf("%d",&choose);
					if (choose==1){
						arrangeOneItem(array,size);
					} else {
						arrangeTwoItem(array,size);
					}
				}
				break;
			case 6:
				if (count==0){
					printf("ban chua nhap mang \n");
				} else {
					findItem(array,size);
				}
				break;
			case 7:
				printf("chuong trinh ket thuc ");
				break;					
			default :
			    printf("khong co trong menu \n");	
		}
	} while (chose!=7);

	return 0;
}
void addItem(int array[],int size){
	for (int i=0;i<size;i++){
		printf("nhap gia tri cho array[%d] ",i);
		scanf("%d",&array[i]);
	}
}
void checkItem(int array[],int size){
	for (int i=0;i<size;i++){
		if (array[i]%2==0){
			printf("so chan %d \n",array[i]);
		}
	}
}
int check(int num){
	if (num<2){
		return 0;
	}
	for (int i=2;i<=sqrt(num);i++){
		if (num%i==0){
			return 0;
		}
	}
	return 1;
}
void checkOneItem(int array[],int size){
	for (int i=0;i<size;i++){
		if (check(array[i])){
			printf("so nguyen to %d \n",array[i]);
		}
	}
}
void reverseItem(int array[],int size){
	int temp;
	for (int i=0;i<size/2;i++){
		temp=array[i];
		array[i]=array[size-i-1];
		array[size-i-1]=temp;
	}
	printf("mang khi dao nguoc : \n");
	for (int i=0;i<size;i++){
		printf("array[%d] = %d \n",i,array[i]);
	}
}
void arrangeOneItem(int array[],int size){
	for (int i=0;i<size-1;i++){
		for (int j=0;j<size-i-1;j++){
			if (array[j]>array[j+1]){
				int temp=array[j];
				array[j]=array[j+1];
				array[j+1]=temp;
			}
		}
	}
	for (int i=0;i<size;i++){
		printf("array[%d] = %d \n",i,array[i]);
	}
}
void arrangeTwoItem(int array[],int size){
	for (int i=0;i<size-1;i++){
		for (int j=0;j<size-i-1;j++){
			if (array[j]<array[j+1]){
				int temp=array[j];
				array[j]=array[j+1];
				array[j+1]=temp;
			}
		}
	}
	for (int i=0;i<size;i++){
		printf("array[%d] = %d \n",i,array[i]);
	}
}
void findItem(int array[],int size){
	int chose1;
	int swap=1;
	printf("moi ban nhap phan tu can tim kiem ");
	scanf("%d",&chose1);
	for (int i=0;i<size;i++){
		if (array[i]==chose1){
			printf("phan tu %d o vi tri %d \n",chose1,i);
			swap++;
		}
	}
	if (swap==1){
		printf("trong mang khong co phan tu %d \n",chose1);
	}
}

