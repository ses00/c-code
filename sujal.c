
#include <stdio.h>

void convertAndPrint(float heightCm, float weightKg) {
    float heightMeters = heightCm / 100.0;
    float weightPounds = weightKg * 2.20462;

    printf("Height: %.2f cm (%.2f m)\n", heightCm, heightMeters);
    printf("Weight: %.2f kg (%.2f lbs)\n", weightKg, weightPounds);
}

int main() {

    convertAndPrint(175.0, 70.0);
    return 0;
}