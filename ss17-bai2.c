#include <stdio.h>

void addString(char text[100]);
void showString(char text[100]);
void showAlphabetString(char text[100],int size);
void showAlphabetString(char text[100],int size);
void showSpecialString(char text[100],int size);

int main(){
	int chose;
	int count=0;
	char text[100];
	int size;
	do {
		printf("-----MENU-----\n");
		printf("1.nhap vao chuoi \n");
		printf("2.hien thi chuoi \n");
		printf("3.dem so luong chu cai trong chuoi va in ra \n");
		printf("4.dem so luong chu so trong chuoi va in ra \n");
		printf("5.dem so luong ky tu dac biet va in ra \n");
		printf("6.thoat \n");
		scanf("%d",&chose);
		switch(chose){
			case 1:
				count=1;
				addString(text);
				break;
			case 2:
				if (count==0){
					printf("ban chua nhap vao chuoi \n");
				} else {
					showString(text);
				}
				break;
			case 3:
				if (count==0){
					printf("ban chua nhap vao chuoi \n");
				} else {
					size=strlen(text);
					showAlphabetString(text,size);
				}
				break;
			case 4:
				if (count==0){
					printf("ban chua nhap vao chuoi \n");
				} else {
					size=strlen(text);
					showNumberString(text,size);
				}
				break;
			case 5:
				if (count==0){
					printf("ban chua nhap vao chuoi \n");
				} else {
					size=strlen(text);
					showSpecialString(text,size);
				}
				break;
			case 6:
				printf("chuong trinh ket thuc ");
				break;
			default :
			    printf("khong co trong menu \n");						
		}
	} while (chose!=6);
	return 0;
}
void addString(char text[100]){
	fflush(stdin);
	printf("moi ban nhap vao chuoi ");
	fgets(text,100,stdin);
}
void showString(char text[100]){
	printf("%s",text);
}
void showAlphabetString(char text[100],int size){
	int count1=0;
	for (int i=0;i<size;i++){
		if ((text[i]>='a' && text[i]<='z') || (text[i]>='A' && text[i]<='Z')){
			count1++;
		}
	}
	printf("tong so chu cai trong chuoi la %d \n",count1);
}
void showNumberString(char text[100],int size){
	int count2=0;
	for (int i=0;i<size;i++){
		if (text[i]>='1' && text[i]<='9'){
			count2++;
		}
	}
	printf("tong so chu so trong chuoi la %d \n",count2);
}
void showSpecialString(char text[100],int size){
	int count3=0;
	for (int i=0;i<size;i++){
		if ((text[i]>='a' && text[i]<='z') || (text[i]>='A' && text[i]<='Z')){
			count3++;
		}
	}
	int count4=0;
	for (int i=0;i<size;i++){
		if (text[i]>='1' && text[i]<='9'){
			count4++;
		}
	}
	printf("tong so ky tu dac biet trong chuoi la %d \n",size-count3-count4-1);
}


