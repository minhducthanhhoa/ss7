#include <stdio.h>
#include <math.h>

int main() {
    float initial_deposit, annual_interest_rate , number_of_months_sent;
    float interest, money_received;

    // Nhap so tien gui ngan hang ban dau  
    printf("Nhap so tien gui ban dau: ");
    scanf("%f", &initial_deposit);

    // Nhap lai suat nam  
    printf("Nhap lai suat nam: ");
    scanf("%f", &annual_interest_rate);

    // Nhap so thang gui  
    printf("Nhap so thang gui: ");
    scanf("%f", &number_of_months_sent);

    // Tính so tien lai 
    interest = initial_deposit * annual_interest_rate * number_of_months_sent / 12.0;

    // Tính so tien nhan duoc sau thoi gian gui 
    money_received = initial_deposit + interest;

    // In so tien lai va so tien nhan duoc 
    printf("So tien lai: %.2f\n", interest);
    printf("So tien nhan duoc sau thoi gian gui: %.2f\n", money_received);

    return 0;
}

