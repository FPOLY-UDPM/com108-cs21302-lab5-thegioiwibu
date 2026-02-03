/******************************************************************************
 * Họ và tên: [Nguyễn Hoàng Anh]
 * MSSV:      [ps48562]
 * Lớp:       [CS21302]
 *****************************************************************************/

//  BÀI 3: XÂY DỰNG HÀM HOÁN VỊ 
//  Input: Nhập vào từ bàn phím 2 giá trị a,b 
//  Output: hoán vị 2 giá trị của a và b 
//  Hướng dẫn thực hiện: 
//  Xây dựng hàm hoán vị sử dụng con trỏ và gọi hàm theo tham chiếu 

#include <stdio.h>

int hoanvi(int *a, int *b) {
    int temp = *a; // Lưu giá trị của a vào biến tạm
    *a = *b;       // Gán giá trị của b cho a
    *b = temp;    // Gán giá trị tạm cho b
}

int main() {
    int a, b;
    printf("Nhap hai so a va b: ");
    scanf("%d %d", &a, &b);
    printf("Truoc khi hoan vi: a = %d, b = %d\n", a, b);
    hoanvi(&a, &b);
    printf("Sau khi hoan vi: a = %d, b = %d\n", a, b);

    
    return 0;
}

