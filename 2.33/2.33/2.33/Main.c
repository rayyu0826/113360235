#include <stdio.h>

int main() {
    float totalmileage, costPerGallon, avgMilesPerGallon, parkingFee, toll;
    float dailyCost;

    printf("�п�J�@�Ѫ��`���{�ơG");
    scanf_s("%f", &totalmileage);

    printf("�п�J�T�o�@����/�[�ڦh�ֿ��G");
    scanf_s("%f", &costPerGallon);

    printf("�п�J�����@����/�[�گ��p�h�֤����G");
    scanf_s("%f", &avgMilesPerGallon);

    printf("�п�J�@�Ѫ������O�G");
    scanf_s("%f", &parkingFee);

    printf("�п�J�@�Ѫ��L���O�G");
    scanf_s("%f", &toll);

    dailyCost = (totalmileage / avgMilesPerGallon) * costPerGallon + parkingFee + toll;

    printf("�C�Ѫ��r�p�����O�G$%.2f\n", dailyCost);
    return 0;
}