#include "DocGia.h"
#include "Sach.h"

#define MaxReader 100
#define MaxNameLen 50
#define MaxBook 100
#define MaxBookPerReader 3

//Khai bao ham

void LapPhieuMuonSach(int readerNo[MaxReader], int borrowDate[MaxBook], int borrowMonth[MaxReader], int borrowYear[MaxReader], int bookISBN[MaxBook], int returnPlanedDate[MaxBook], int returnPlanedMonth[MaxBook], int returnPlanedYear[MaxBook], int readerCount, int bookCount);