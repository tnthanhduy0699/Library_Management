#include <stdio.h>
#include <string.h>
#include "DocGia.h"
#include "Sach.h"

#define MaxReader 100
#define MaxNameLen 50
#define MaxBook 100


//Mang chua thong tin doc gia
int readerNo[MaxReader];
char readerName[MaxReader][MaxNameLen];
char readerID[MaxReader][MaxNameLen];
int readerDate[MaxReader];
int readerMonth[MaxReader];
int readerYear[MaxReader];
char readerGender[MaxReader][MaxNameLen];
char readerEmail[MaxReader][MaxNameLen];
char readerLocation[MaxReader][MaxNameLen];
int libraryCardDate[MaxReader];
int libraryCardMonth[MaxReader];
int libraryCardYear[MaxReader];
int readerCount = 0;
//Mang chua thong tin sach
int bookISBN[MaxBook];
char bookName[MaxBook][MaxNameLen];
char authName[MaxBook][MaxNameLen];
char Publisher[MaxBook][MaxNameLen];
int PublishYear[MaxBook];
char bookType[MaxBook][MaxNameLen];
int bookPrice[MaxBook];
int bookAmount[MaxBook];
int bookCount = 0;
int main()
{
	int opt;
	do
	{
		printf("*** Ung dung quan ly thu vien ***\n");
		printf("1.  Xem danh sach doc gia trong thu vien\n");
		printf("2.  Them doc gia\n");
		printf("3.  Chinh sua thong tin mot doc gia\n");
		printf("4.  Xoa thong tin mot doc gia\n");
		printf("5.  Tim kiem doc gia theo CMND\n");
		printf("6.  Tim kiem doc gia ho ten\n");
		printf("7.  Xem danh sach cac sach trong thu vien\n");
		printf("8.  Them sach\n");
		printf("9.  Chinh sua thong tin mot quyen sach\n");
		printf("10. Xoa thong tin sach\n");
		printf("11. Tim kiem sach theo ISBN\n");
		printf("12. Tim kiem sach theo ten sach\n");
		printf("13. Lap phieu muon sach\n");
		printf("14. Lap phieu tra sach\n");
		printf("15. Thong ke so luong sach trong thu vien\n");
		printf("16. Thong ke so luong sach theo the loai\n");
		printf("17. Thong ke so luong doc gia\n");
		printf("18. Thong ke so luong doc gia theo gioi tinh\n");
		printf("19. Thong ke so sach dang duoc muon\n");
		printf("20. Thong ke danh sach doc gia bi tre han\n");
		printf("0.  Thoat chuong trinh\n");
		printf("================================\n");
		printf("Vui long chon chuc nang: ");
		scanf("%d", &opt);
		switch (opt)
		{
		case 1:
			XemDocGia(readerNo, readerName, readerID, readerDate, readerMonth, readerYear, readerGender, readerEmail, readerLocation, libraryCardDate, libraryCardMonth, libraryCardYear, readerCount);
			break;
		case 2:
			readerCount = ThemDocGia(readerNo, readerName, readerID, readerDate, readerMonth, readerYear, readerGender, readerEmail, readerLocation, libraryCardDate, libraryCardMonth, libraryCardYear, readerCount);
			break;
		case 3:
			ChinhSuaThongTinDocGia(readerNo, readerName, readerID, readerDate, readerMonth, readerYear, readerGender, readerEmail, readerLocation, libraryCardDate, libraryCardMonth, libraryCardYear, readerCount);
			break;
		case 4:
			readerCount = XoaDocGia(readerNo, readerName, readerID, readerDate, readerMonth, readerYear, readerGender, readerEmail, readerLocation, libraryCardDate, libraryCardMonth, libraryCardYear, readerCount);
			break;
		case 5:
			TimKiemDocGia_CCCD(readerNo, readerName, readerID, readerDate, readerMonth, readerYear, readerGender, readerEmail, readerLocation, libraryCardDate, libraryCardMonth, libraryCardYear, readerCount);
			break;
		case 6:
			TimKiemDocGia_Ten(readerNo, readerName, readerID, readerDate, readerMonth, readerYear, readerGender, readerEmail, readerLocation, libraryCardDate, libraryCardMonth, libraryCardYear, readerCount);
			break;
		case 7:
			XemSach(bookISBN, bookName, authName, Publisher, PublishYear, bookType, bookPrice, bookAmount, bookCount);
			break;
		case 8:
			bookCount = ThemSach(bookISBN, bookName, authName, Publisher, PublishYear, bookType, bookPrice, bookAmount, bookCount);
			break;
		case 9:
			ChinhSuaThongTinSach(bookISBN, bookName, authName, Publisher, PublishYear, bookType, bookPrice, bookAmount, bookCount);
			break;
		case 10:
			bookCount = XoaSach(bookISBN, bookName, authName, Publisher, PublishYear, bookType, bookPrice, bookAmount, bookCount);
			break;
		case 11:
			TimKiemSach_ISBN(bookISBN, bookName, authName, Publisher, PublishYear, bookType, bookPrice, bookAmount, bookCount);
			break;
		case 12:
			TimKiemSach_TenSach(bookISBN, bookName, authName, Publisher, PublishYear, bookType, bookPrice, bookAmount, bookCount);
			break;
		case 15:
			ThongKeSoLuongSach(bookISBN, bookName, authName, Publisher, PublishYear, bookType, bookPrice, bookAmount, bookCount);
			break;
		case 16:
			ThongKeSachTheoTheLoai(bookType, bookCount);
			break;
		case 17:
			ThongKeSoLuongDocGia(readerNo, readerName, readerID, readerDate, readerMonth, readerYear, readerGender, readerEmail, readerLocation, libraryCardDate, libraryCardMonth, libraryCardYear, readerCount);
			break;
		case 0: 
			printf("Chao tam biet!\n");
			break;
		default:
			printf("Vui long chon chuc nang hop le!\n");
			break;
		}
	} while (opt != 0);
	return 0;
}