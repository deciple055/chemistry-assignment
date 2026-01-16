#include <stdio.h>

int main() {
    float water; 

    
    float CaHCO3, MgHCO3, CaSO4, CaCl2, MgSO4, MgCl2;

    float CaHCO3_eq, MgHCO3_eq, CaSO4_eq, CaCl2_eq, MgSO4_eq, MgCl2_eq;

    float tempHard, permHard, mgPermHard;
    float lime, soda;

    printf("----- LIME SODA PROCESS (Krishna Vishwakarma) -----\n\n");

    printf("Enter amount of water (in litres): ");
    scanf("%f", &water);

    printf("\nEnter concentration in ppm (enter 0 if not present)\n");

    printf("Ca(HCO3)2 : ");
    scanf("%f", &CaHCO3);

    printf("Mg(HCO3)2 : ");
    scanf("%f", &MgHCO3);

    printf("CaSO4     : ");
    scanf("%f", &CaSO4);

    printf("CaCl2     : ");
    scanf("%f", &CaCl2);

    printf("MgSO4     : ");
    scanf("%f", &MgSO4);

    printf("MgCl2     : ");
    scanf("%f", &MgCl2);

    // Conversion to CaCO3 equivalents
    CaHCO3_eq = (CaHCO3 * 100) / 162;
    MgHCO3_eq = (MgHCO3 * 100) / 146;
    CaSO4_eq  = (CaSO4  * 100) / 136;
    CaCl2_eq  = (CaCl2  * 100) / 111;
    MgSO4_eq  = (MgSO4 * 100) / 120;
    MgCl2_eq  = (MgCl2 * 100) / 95;

  
    tempHard = CaHCO3_eq + MgHCO3_eq;
    permHard = CaSO4_eq + CaCl2_eq + MgSO4_eq + MgCl2_eq;
    mgPermHard = MgSO4_eq + MgCl2_eq;

  
    lime = (tempHard + mgPermHard) * 0.74 * water / 1000;
    soda = permHard * 1.06 * water / 1000;

   
    printf("\n----- HARDNESS IN CaCO3 TERMS (ppm) -----\n");
    printf("Ca(HCO3)2 : %.2f\n", CaHCO3_eq);
    printf("Mg(HCO3)2 : %.2f\n", MgHCO3_eq);
    printf("CaSO4     : %.2f\n", CaSO4_eq);
    printf("CaCl2     : %.2f\n", CaCl2_eq);
    printf("MgSO4     : %.2f\n", MgSO4_eq);
    printf("MgCl2     : %.2f\n", MgCl2_eq);

    printf("\nTemporary Hardness : %.2f ppm\n", tempHard);
    printf("Permanent Hardness : %.2f ppm\n", permHard);

    printf("\n----- CHEMICAL REQUIREMENT -----\n");
    printf("Lime required  (Ca(OH)2) : %.3f kg\n", lime);
    printf("Soda required  (Na2CO3)  : %.3f kg\n", soda);

    return 0;
}