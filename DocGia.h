extern int readerCount;
#define MaxReader 100
#define MaxNameLen 50

// Khai bao ham;

void XemDocGia(int readerNo[], char readerName[][MaxNameLen], char readerID[][MaxNameLen], int readerDate[], int readerMonth[], int readerYear[], char readerGender[][MaxNameLen], char readerEmail[MaxReader][MaxNameLen], char readerLocation[][MaxNameLen], int libraryCardDate[], int libraryCardMonth[], int libraryCardYear[], int readerCount);
int ThemDocGia(int readerNo[], char readerName[][MaxNameLen], char readerID[][MaxNameLen], int readerDate[], int readerMonth[], int readerYear[], char readerGender[][MaxNameLen], char readerEmail[MaxReader][MaxNameLen], char readerLocation[][MaxNameLen], int libraryCardDate[], int libraryCardMonth[], int libraryCardYear[], int readerCount);
void ChinhSuaThongTinDocGia(int readerNo[], char readerName[][MaxNameLen], char readerID[][MaxNameLen], int readerDate[], int readerMonth[], int readerYear[], char readerGender[][MaxNameLen], char readerEmail[MaxReader][MaxNameLen], char readerLocation[][MaxNameLen], int libraryCardDate[], int libraryCardMonth[], int libraryCardYear[], int readerCount);
int XoaDocGia(int readerNo[], char readerName[][MaxNameLen], char readerID[][MaxNameLen], int readerDate[], int readerMonth[], int readerYear[], char readerGender[][MaxNameLen], char readerEmail[MaxReader][MaxNameLen], char readerLocation[][MaxNameLen], int libraryCardDate[], int libraryCardMonth[], int libraryCardYear[], int readerCount);
void TimKiemDocGia_CCCD(int readerNo[], char readerName[][MaxNameLen], char readerID[][MaxNameLen], int readerDate[], int readerMonth[], int readerYear[], char readerGender[][MaxNameLen], char readerEmail[MaxReader][MaxNameLen], char readerLocation[][MaxNameLen], int libraryCardDate[], int libraryCardMonth[], int libraryCardYear[], int readerCount);
void TimKiemDocGia_Ten(int readerNo[], char readerName[][MaxNameLen], char readerID[][MaxNameLen], int readerDate[], int readerMonth[], int readerYear[], char readerGender[][MaxNameLen], char readerEmail[MaxReader][MaxNameLen], char readerLocation[][MaxNameLen], int libraryCardDate[], int libraryCardMonth[], int libraryCardYear[], int readerCount);
int ThongKeSoLuongDocGia(int readerCount);
