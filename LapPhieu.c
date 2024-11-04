#include <stdio.h>
#include <string.h>
#include "DocGia.h"
#include "Sach.h"
#include "LapPhieu.h"

void LapPhieuMuonSach(int readerNo[MaxReader], int borrowDate[MaxBook], int borrowMonth[MaxReader], int borrowYear[MaxReader], int bookISBN[MaxBook * MaxBookPerReader], int returnPlanedDate[MaxBook], int returnPlanedMonth[MaxBook], int returnPlanedYear[MaxBook], int readerCount, int bookCount)
{
    if (readerCount == 0 || bookCount == 0)
    {
        printf("Khong du du lieu de lap phieu muon sach!\n");
        return;
    }

    int readerPos, bookBorrowedCount;
    printf("Nhap ma doc gia: ");
    scanf("%d", &readerPos);

    if (readerPos < 1 || readerPos > readerCount)
    {
        printf("Khong ton tai doc gia nay trong danh sach!\n");
        return;
    }

    printf("Nhap so luong sach muon muon: ");
    scanf("%d", &bookBorrowedCount);

    //Kiem tra so luong sach doc gia muon muon sau khi nhap
    if (bookBorrowedCount > MaxBookPerReader)
    {
        printf("Ban chi duoc muon toi da %d quyen sach!\n", MaxBookPerReader);
        return;
    }
    //Kiem tra so luong sach hien tai trong thu vien so voi so luong sach can muon
    if (bookBorrowedCount > bookCount)
    {
        printf("Khong du so luong sach trong thu vien!\n");
        return;
    }
    
    printf("Nhap ma sach: ");
    for (int i = 0; i < bookBorrowedCount; i++)
    {
        scanf("%d", &bookISBN[(readerPos - 1) * MaxBookPerReader + i]);
    }

    
    printf("Nhap ngay, thang, nam muon sach: ");
    scanf("%d %d %d", &borrowDate[readerPos-1], &borrowMonth[readerPos-1], &borrowYear[readerPos-1]);

    printf("Nhap ngay, thang, nam du kien tra sach: ");
    scanf("%d %d %d", &returnPlanedDate[readerPos-1], &returnPlanedMonth[readerPos-1], &returnPlanedYear[readerPos-1]);

    //Lap phieu muon sach dang bang
    printf("Phieu muon sach: \n");
    printf("+----------+----------------+-----------------------+------------------+\n");
    printf("|    No.   | Ngay muon sach | Ngay tra sach du kien | Ma sach can muon |\n");
    printf("+----------+----------------+-----------------------+------------------+\n");

    printf("| %03d      | %02d / %02d / %04d | %02d / %02d / %04d        |",
    readerNo[readerPos - 1],
    borrowDate[readerPos - 1],
    borrowMonth[readerPos - 1],
    borrowYear[readerPos - 1],
    returnPlanedDate[readerPos - 1],
    returnPlanedMonth[readerPos - 1],
    returnPlanedYear[readerPos - 1]);

    for (int i = 0; i < bookBorrowedCount; i++)
    {
        printf(" %03d ", bookISBN[(readerPos - 1) * MaxBookPerReader + i]);
    }

    for (int i = bookBorrowedCount; i < MaxBookPerReader; i++)
    {
        printf("     ");
    }
    printf("  |\n");
    
    printf("+----------+----------------+-----------------------+------------------+\n");
}