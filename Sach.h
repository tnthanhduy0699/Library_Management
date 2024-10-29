extern int bookCount;
#define MaxBook 100
#define MaxNameLen 50

// Khai bao ham;

void XemSach(int bookISBN[], char bookName[][MaxNameLen], char authName[][MaxNameLen], char Publisher[MaxBook][MaxNameLen], int PublishYear[MaxBook], char bookType[MaxBook][MaxNameLen], int bookPrice[MaxBook], int bookAmount[], int bookCount);
int ThemSach(int bookISBN[], char bookName[][MaxNameLen], char authName[][MaxNameLen], char Publisher[MaxBook][MaxNameLen], int PublishYear[MaxBook], char bookType[MaxBook][MaxNameLen], int bookPrice[MaxBook], int bookAmount[], int bookCount);
void ChinhSuaThongTinSach(int bookISBN[], char bookName[][MaxNameLen], char authName[][MaxNameLen], char Publisher[MaxBook][MaxNameLen], int PublishYear[MaxBook], char bookType[MaxBook][MaxNameLen], int bookPrice[MaxBook], int bookAmout[], int bookCount);
int XoaSach(int bookISBN[], char bookName[][MaxNameLen], char authName[][MaxNameLen], char Publisher[MaxBook][MaxNameLen], int PublishYear[MaxBook], char bookType[MaxBook][MaxNameLen], int bookPrice[MaxBook], int bookAmout[], int bookCount);
void TimKiemSach_ISBN(int bookISBN[], char bookName[][MaxNameLen], char authName[][MaxNameLen], char Publisher[MaxBook][MaxNameLen], int PublishYear[MaxBook], char bookType[MaxBook][MaxNameLen], int bookPrice[MaxBook], int bookAmount[], int bookCount);
void TimKiemSach_TenSach(int bookISBN[], char bookName[][MaxNameLen], char authName[][MaxNameLen], char Publisher[MaxBook][MaxNameLen], int PublishYear[MaxBook], char bookType[MaxBook][MaxNameLen], int bookPrice[MaxBook], int bookAmount[], int bookCount);
int ThongKeSoLuongSach(int bookCount);