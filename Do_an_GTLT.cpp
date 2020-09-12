#include<stdio.h>
#include<string.h>
struct element {
	char maVatTu[5];
	char tenVatTu[10];
	char loaiVatTu[10];
	char donViTinh[20];
	char ngayNhap[12];
	char nhaSanXuat[10];
	int soLuong;
	int donGia;
	int thanhTien;
	
	void xuat(){
		printf("%s\t%s\t\t%s\t%s\t%s\t%s\t%d\t%d\t%d", maVatTu, tenVatTu, loaiVatTu, 
		donViTinh, ngayNhap, nhaSanXuat, soLuong, donGia, thanhTien);
	}
};

typedef element *List;

void writeFile(FILE* file, struct element* B){
	fwrite(B,sizeof(struct element),1,file);
}
void readFile(FILE* file, struct element* B){
	fread(B,sizeof(struct element),1,file);
}
