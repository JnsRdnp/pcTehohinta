#include <stdio.h>
#include <stdbool.h>

int main() {
    int price,cpu,vc;

    while(1==1) {
        printf("\tOhjelma laskee tietokoneen tehon suhteessa hintaan\n\n");
        printf("Koneen hinta on:\n");
        scanf("%d",&price);
        printf("\nProsessorin teho:\n");
        scanf("%d",&cpu);
        printf("\nNayttiksen teho:\n");
        scanf("%d",&vc);

        float tehop=((cpu+vc)/price);
        float cp=(cpu/price);
        float vcp=(vc/price);

        printf("\nKoneen teho/hinta on %.2f\n",tehop);
        printf("Koneen cpu/hinta on %.2f\n", cp);
        printf("Koneen nayttis/hinta on %.2f\n\n\n\n", vcp);

    }


    return 0;
}
