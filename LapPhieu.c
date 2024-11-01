#include <stdio.h>
#include <string.h>
#include "DocGia.h"
#include "Sach.h"
#include "LapPhieu.h"

void LapPhieuMuonSach(int readerNo[MaxReader], int borrowDate[MaxBook], int borrowmonth[MaxReader], int borrowYear[MaxReader], int bookISBN[MaxBook], int readerCount, int bookCount)
{
    if (readerCount == 0 || bookCount == 0)
    {
        printf("Khong du du lieu de lap phieu muon sach!\n");
        return;
    }

    int readerPos;
    printf("Chon doc gia can lap phieu muon sach: ");
    scanf("%d", &readerPos);

    printf("Nhap ngay, thang, nam tra sach du kien: ");
    scanf("%d %d %d", &borrowDate[readerPos-1], &borrowmonth[readerPos-1], &borrowYear[readerPos-1]);

    // for (int i = readerPos - 1; i < readerCount -1; i++)
    // {
    //     printf("Nhap ngay, thang, nam tra sach du kien: ");
    //     scanf("%d %d %d", &borrowDate[readerPos-1], &borrowmonth[readerPos-1], &borrowYear[readerPos-1]);
    // }

    printf("ID: %d \t Ngay: %02d / %02d / %04d", readerNo[readerPos - 1],borrowDate[readerPos - 1], borrowmonth[readerPos - 1], borrowYear[readerPos - 1]);
}