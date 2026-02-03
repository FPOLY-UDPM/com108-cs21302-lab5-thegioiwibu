/******************************************************************************
 * Họ và tên: [Nguyễn Hoàng Anh]
 * MSSV:      [ps48562]
 * Lớp:       [CS21302]
 *****************************************************************************/

//  BÀI 1: XÂY DỰNG CHƯƠNG TRÌNH TÌM GIÁ TRỊ LỚN NHẤT TRONG 3 SỐ  
//  Input: Nhập từ bàn phím 3 số bất kỳ 
//  Output: Xuất ra màn hình số lớn nhất trong 3 số 
//  Hướng dẫn: Xây dựng hàm tìm giá trị lớn nhất trong 3 số. Hàm có giá trị trả về mà 
//  giá trị lớn nhất giữa 3 số 

#include <stdio.h>

int timsolonnhat(int so1, int so2, int so3) {
    int max = so1; // Giả sử so1 là số lớn nhất ban đầu
    if (so2 > max) {
        max = so2; // Cập nhật max nếu so2 lớn hơn
    }
    if (so3 > max) {
        max = so3; // Cập nhật max nếu so3 lớn hơn
    }
    return max; // Trả về giá trị lớn nhất
}
 

int main() {
    int so1, so2, so3;
    printf("Nhap 3 so nguyen: ");   
    scanf("%d %d %d", &so1, &so2, &so3);
    int max = timsolonnhat(so1, so2, so3);
    printf("So lon nhat trong 3 so la: %d\n", max);
    return 0;
}