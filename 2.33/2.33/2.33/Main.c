#include <stdio.h>

int main() {
    float totalmileage, costPerGallon, avgMilesPerGallon, parkingFee, toll;
    float dailyCost;

    printf("請輸入一天的總里程數：");
    scanf_s("%f", &totalmileage);

    printf("請輸入汽油一公升/加侖多少錢：");
    scanf_s("%f", &costPerGallon);

    printf("請輸入平均一公升/加侖能行駛多少公里：");
    scanf_s("%f", &avgMilesPerGallon);

    printf("請輸入一天的停車費：");
    scanf_s("%f", &parkingFee);

    printf("請輸入一天的過路費：");
    scanf_s("%f", &toll);

    dailyCost = (totalmileage / avgMilesPerGallon) * costPerGallon + parkingFee + toll;

    printf("每天的駕駛成本是：$%.2f\n", dailyCost);
    return 0;
}