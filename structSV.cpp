#include<stdio.h>
#include<conio.h>
#include<string.h>

struct HoTen{
	char hodem[15];
	char ten[15];
};
struct SinhVien{
	struct HoTen ht;
	float cc;
	float kt;
	float thi;
	float dtb;
};

void Nhap(int n, SinhVien sv[30]){
	for(int i = 1; i<=n;i++){
		printf("\n===Thong tin sv thu %d===", i);
		printf("\nNhap ho dem: ");
		fflush(stdin);
		gets(sv[i].ht.hodem);
		fflush(stdin);
		printf("\nNhap ten: ");
		gets(sv[i].ht.ten);
		fflush(stdin);
		printf("\nNhap diem cc, ktra, thi lan luot la: ");
		scanf("%f%f%f", &sv[i].cc, &sv[i].kt, &sv[i].thi);
	}
}
int DiemTongKet(SinhVien sv[30],int n){
	for(int i = 1; i<=n;i++){
		sv[i].dtb= sv[i].cc * 0.1+ sv[i].kt * 0.2+ sv [i].thi*0.7;
	}
}
int xuat(int n, SinhVien sv[]){
	printf("\nSTT   Ten       Ho dem      Diem Tong ket\n");
	for(int i = 1; i<=n;i++){
		printf("%-6d%-10s%-12s%-0.2f\n", i, sv[i].ht.ten, sv[i].ht.hodem, sv[i].dtb);
	}
}
int sapxepten(int n, SinhVien sv[]){
	SinhVien tg;
	for(int i = 1;i < n;i++){
		for(int j = i+1;j<=n;j++){
			if(strcmp(sv[i].ht.ten, sv[j].ht.ten) > 0){
				tg = sv[i];
				sv[i] = sv[j];
				sv[j] = tg;
			}
		}
	}
}
int sapxepdiem(int n, SinhVien sv[]){
	SinhVien tg;
	for(int i = 1; i < n; i++){
		for(int j = i + 1; i<=n; i++){
			if(sv)
		}
	}
}
int main(){
	int n; 
	printf("\nNhap n: "); scanf("%d", &n);

	struct SinhVien sv[30];
	
	Nhap(n, sv);
	DiemTongKet(sv, n);
	xuat(n, sv);
	
	sapxepten(n, sv);
	xuat(n, sv);
}


