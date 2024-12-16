#include <stdio.h>

void addItem(int *ptr,int *size);
void showItem(int *ptr,int size);
void lengthItem(int size);
void sumItem(int *ptr,int size);
void findMaxItem(int *ptr,int size);

int main(){
	int chose,count=0;
	int array[100],size;
	do {
		printf("-----MENU-----\n");
		printf("1.nhap vao so phan tu va tung phan tu \n");
		printf("2.hien thi cac phan tu trong mang \n");
		printf("3.tinh do dai mang \n");
		printf("4.tinh tong cac phan tu trong mang \n");
		printf("5.hien thi phan tu lon nhat \n");
		printf("6.thoat \n");
		scanf("%d",&chose);
		switch(chose) {
		case 1:
			printf("nhap vao so phan tu ");
	        scanf("%d",&size);
	        array[100]=array[size];
	        count=1;
			addItem(array,&size);
			break;
		case 2:
			if (count==0){
				printf("ban chua nhap vao mang \n");
			} else {
				showItem(array,size);
			}
			break;
		case 3:
			if (count==0){
				printf("ban chua nhap vao mang \n");
			} else {
				lengthItem(size);
			}
			break;
		case 4:
			if (count==0){
			    printf("ban chua nhap vao mang \n");
			} else {
				sumItem(array,size);
			}
			break;
		case 5:
			if (count==0){
				printf("ban chua nhap vao mang \n");
			} else {
				findMaxItem(array,size);
			}
			break;
		case 6:
			printf("ket thuc chuong trinh ");
			break;
		default :
		    printf("khong co trong menu \n");					
		}
	} while (chose!=6);
	

	return 0;
}

void addItem(int *ptr,int *size){
	for (int i=0;i<*size;i++){
		printf("nhap gia tri cho mang array[%d] = ",i);
		scanf("%d",&ptr[i]);
	}
}
void showItem(int *ptr,int size){
	for (int i=0;i<size;i++){
		printf("array[%d] = %d \n",i,*(ptr+i));
	}
}
void lengthItem(int size){
	printf("do dai cua mang la %d \n",size);
}
void sumItem(int *ptr,int size){
	int sum=0;
	for (int i=0;i<size;i++){
		sum+=*(ptr+i);
	}
	printf("tong cua cac phan tu trong mang la %d \n",sum);
}
void findMaxItem(int *ptr,int size){
	int max=*(ptr+0);
	for (int i=0;i<size;i++){
		if (*(ptr+i)>max){
			max=*(ptr+i);
		}
	}
	printf("phan tu lon nhat trong mang la %d \n",max);
}

