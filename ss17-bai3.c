#include <stdio.h>
#include <string.h>
#include <ctype.h>

void addString(char text[100]);
void reverseString(char text[100],char text1[100],int size);
void countString(char text[100],int size,int countChar);
void checkString(char text[100],char text2[100],int size,int size1);
void toupperString(char text[100],int size);
void catString(char text[100],char text3[100]);

int main(){
	int chose;
	int count=0,size,size1;
	char text[100],text1[100],text2[100],text3[100];
	int countChar=0;
	do {
		printf("-----MENU-----\n");
		printf("1.nhap vao chuoi \n");
		printf("2.hien thi ra chuoi dao nguoc \n");
		printf("3.dem so luong tu trong chuoi \n");
		printf("4.nhap vao mot chuoi va so sanh voi chuoi ban dau \n");
		printf("5.in hoa tat ca chu cai trong chuoi \n");
		printf("6.nhap vao chuoi khac va them vao chuoi ban dau \n");
		printf("7.thoat \n");
		scanf("%d",&chose);
		switch(chose){
			case 1 :
				count=1;
				addString(text);
				size=strlen(text)-1;
				break;
			case 2 :
				if (count==0){
					printf("ban chua nhap chuoi \n");
				} else {
					reverseString(text,text1,size);
				}
				break;
			case 3 :
				if (count==0){
					printf("ban chua nhap chuoi \n");
				} else {
					countString(text,size,countChar);
				}
				break;
			case 4 :
				if (count==0){
					printf("ban chua nhap chuoi \n");
				} else {
					checkString(text,text2,size,size1);
				}
				break;
			case 5 :
				if (count==0){
					printf("ban chua nhap chuoi \n");
				} else {
					toupperString(text,size);
				}
				break;
			case 6 :
				if (count==0){
					printf("ban chua nhap chuoi \n");
				} else {
					catString(text,text3);
				}
				break;
			case 7 :
				printf("chuong trinh ket thuc ");
				break;
			default :
			    printf("khong co trong menu \n");				
				
		}
	} while (chose!=7);

	return 0;
}
void addString(char text[100]){
	fflush(stdin);
	printf("moi ban nhap vao chuoi ");
	fgets(text,100,stdin);
}
void reverseString(char text[100],char text1[100],int size){
	for(int i=0;i<size;i++){
		text1[i]=text[size-i-1];
	}
	text1[size]='\0';
	printf("%s \n",text1);
}
void countString(char text[100],int size,int countChar){
	countChar=1;
	for (int i=0;i<size;i++){
		if (text[i]==' '){
			countChar++;
		}
	}
	printf("trong chuoi co %d tu \n",countChar);
}
void checkString(char text[100],char text2[100],int size,int size1){
	fflush(stdin);
	printf("moi ban nhap chuoi can so sanh ");
	fgets(text2,100,stdin);
	size1=strlen(text2);
	if (size>size1){
		printf("chuoi ban dau lon hon \n");
	} else {
		printf("chuoi ban dau nho hon \n");
	}
}
void toupperString(char text[100],int size){
	for (int i=0;i<size;i++){
		printf("%c",toupper(text[i]));
	}
	printf("\n");
}
void catString(char text[100],char text3[100]){
	fflush(stdin);
	printf("moi ban nhap chuoi can noi ");
	fgets(text3,100,stdin);
	strcat(text,text3);
	printf("%s",text);
	printf("\n");
}

