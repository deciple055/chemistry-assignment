//
//  chem.c
//  Created by krishna makodiya, krishna vishwakarma , krish pahuja , krishna kanojiya, krishna mishra  on 17/01/26.



#include <stdio.h>

int main(void) {
    float water;
    float CaHCO3, MgHCO3, CaSO4, CaCl2, MgSO4, MgCl2;
    float CaHCO3_eq, MgHCO3_eq, CaSO4_eq, CaCl2_eq, MgSO4_eq, MgCl2_eq;
    float tempHard = 0, permHard = 0, totalHard;
    float mgPermHard;
    float lime = 0, soda = 0;
    char known;

    printf("----- WATER SOFTENING ANALYSIS -----\n\n");

    printf("Do you already know Temporary & Permanent Hardness? (Y/N): ");
    scanf(" %c", &known);

    if (known == 'N' || known == 'n') {
        printf("\nEnter amount of water (in litres): ");
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
        
        totalHard = tempHard + permHard;

        printf("\n----- WATER QUALITY ANALYSIS -----\n");
        printf("Temporary Hardness : %.2f ppm\n", tempHard);
        printf("Permanent Hardness : %.2f ppm\n", permHard);
        printf("Total Hardness     : %.2f ppm\n", totalHard);

        printf("\n----- TREATMENT DECISION -----\n");

        if (totalHard <= 300) {
            printf("Water is fit for drinking.\n");
            printf("No softening process required.\n");
        }
        else if (totalHard > 300 && totalHard <= 600) {
            printf("Water is hard.\n");
            printf("Selected Process: Zeolite Process\n");
            printf("Reason: Effective for removal of permanent hardness.\n");
        }
        else {
            printf("Water is very hard.\n");
            printf("Selected Process: Lime-Soda Process\n");
            printf("Reason: Economical and suitable for highly hard water.\n");
        }

        printf("\n----- CHEMICAL REQUIREMENT -----\n");
        printf("Lime required (Ca(OH)2): %.3f kg\n", lime);
        printf("Soda required (Na2CO3) : %.3f kg\n", soda);
    }
    else if(known == 'Y' || known == 'y') {
        printf("\nEnter Temporary Hardness (ppm): ");
        scanf("%f", &tempHard);

        printf("Enter Permanent Hardness (ppm): ");
        scanf("%f", &permHard);
        
        
        totalHard = tempHard + permHard;

        printf("\n----- WATER QUALITY ANALYSIS -----\n");
        printf("Temporary Hardness : %.2f ppm\n", tempHard);
        printf("Permanent Hardness : %.2f ppm\n", permHard);
        printf("Total Hardness     : %.2f ppm\n", totalHard);

        printf("\n----- TREATMENT DECISION -----\n");

        if (totalHard <= 300) {
            printf("Water is fit for drinking.\n");
            printf("No softening process required.\n");
        }
        else if (totalHard > 300 && totalHard <= 600) {
            printf("Water is hard.\n");
            printf("Selected Process: Zeolite Process\n");
            printf("Reason: Effective for removal of permanent hardness.\n");
        }
        else {
            printf("Water is very hard.\n");
            printf("Selected Process: Lime-Soda Process\n");
            printf("Reason: Economical and suitable for highly hard water.\n");
        }
    }
    else {
        printf("\n \t----PLEASE ENTER Y/N----\n");
    }
    

    
    printf("\n----- THIS ASSIGNMENT BELONGS TO GROUP THREE ! -----\n \t-----FROM S.no 13-TO-18 -----\n");
    printf(" 13-->krish pahuja \n 14-->krishna kannojiya \n 15-->krishna kumar mishra\n 16-->Krishna makodiya \n 17-->krishna patel \n 18-->krishna vishwakarma\n");

    return 0;
}
