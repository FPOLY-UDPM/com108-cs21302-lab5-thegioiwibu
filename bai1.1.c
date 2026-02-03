// VÍ DỤ
// XÂY DỰNG CHƯƠNG TRÌNH TÌM GIÁ TRỊ LỚN NHẤT TRONG 3 SỐ

#include <stdio.h>
int timsolonnhat(int a, int b, int c) {
    int max = a; // Giả sử a là số lớn nhất ban đầu
    if (b > max) {
        max = b; // Cập nhật max nếu b lớn hơn
    }
    if (c > max) {
        max = c; // Cập nhật max nếu c lớn hơn
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