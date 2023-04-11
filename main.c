#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void vypisMenu(double hlavniHodnota) {
    printf("\n--------------------------------------------------\n\n");
    printf("Kalkulacka\n");
    printf("Vysledek: %.1lf \n\n",hlavniHodnota);
    printf("Operace:\n");
    printf("1. Vynulovat vysledek.\n");
    printf("2. Scitani. (+)\n");
    printf("3. Odcitani. (-)\n");
    printf("4. Nasobeni. (*)\n");
    printf("5. Deleni. (/)\n");
    printf("6. Modulo.\n");
    printf("7. Faktorial. (!)\n");
    printf("8. Mocnina.\n");
    printf("9. Odmocnina.\n");
    printf("10. Procento.\n");
    printf("11. Ukoncit program.\n");
}

double scitani(double hlavniHodnota) {
    printf("Zadejte cislo ktere chcete pricist: ");
    double cislo;
    while (scanf("%lf", &cislo) != 1) {
      printf("Zadali jste cislo spatne.\n");
      printf("Zadejte cislo znovu: ");
      while (getchar() != '\n');
    }
    cislo = cislo+hlavniHodnota;
    return cislo;
}

double odcitani(double hlavniHodnota) {
    printf("Zadejte cislo ktere chcete odecist: ");
    double cislo;
    while (scanf("%lf", &cislo) != 1) {
      printf("Zadali jste cislo spatne.\n");
      printf("Zadejte cislo znovu: ");
      while (getchar() != '\n');
    }
    cislo = hlavniHodnota-cislo;
    return cislo;
}

double nasobeni(double hlavniHodnota) {
    printf("Zadejte cislo kterym chcete nasobit: ");
    double cislo;
    while (scanf("%lf", &cislo) != 1) {
      printf("Zadali jste cislo spatne.\n");
      printf("Zadejte cislo znovu: ");
      while (getchar() != '\n');
    }
    cislo = hlavniHodnota*cislo;
    return cislo;
}

double deleni(double hlavniHodnota) {
    printf("Zadejte cislo kterym chcete delit: ");
    double cislo;
    while (scanf("%lf", &cislo) != 1) {
      printf("Zadali jste cislo spatne.\n");
      printf("Zadejte cislo znovu: ");
      while (getchar() != '\n');
    }
    cislo = hlavniHodnota/cislo;
    return cislo;
}

double modulo(double hlavniHodnota) {
    printf("Zvolili jste modulo.\n");
    printf("Zadejte cislo: ");
    double cislo;
    while (scanf("%lf", &cislo) != 1) {
      printf("Zadali jste cislo spatne.\n");
      printf("Zadejte cislo znovu: ");
      while (getchar() != '\n');
    }
    cislo = fmod(hlavniHodnota, cislo);
    return cislo;
}

double faktorial(double hlavniHodnota) {
    printf("\nFaktorial bude pricten k vysledku.\n");
    printf("Zadejte cislo: ");
    double cislo;
    while (scanf("%lf", &cislo) != 1) {
      printf("Zadali jste cislo spatne.\n");
      printf("Zadejte cislo znovu: ");
      while (getchar() != '\n');
    }
    double vysledek = 1;
    for (double i = 1; i <= cislo; i++) {
        vysledek = vysledek*i;
    }
    vysledek = vysledek+hlavniHodnota;
    return vysledek;
}

double mocnina(double hlavniHodnota) {
    printf("\nMocnina bude prictena k vysledku.\n");
    printf("Zadejte zaklad: ");
    double zaklad;
    while (scanf("%lf", &zaklad) != 1) {
      printf("Zadali jste cislo spatne.\n");
      printf("Zadejte cislo znovu: ");
      while (getchar() != '\n');
    }
    printf("Zadejte exponent: ");
    double exponent;
    while (scanf("%lf", &exponent) != 1) {
      printf("Zadali jste cislo spatne.\n");
      printf("Zadejte cislo znovu: ");
      while (getchar() != '\n');
    }
    //pocitani mocnin
    //v pripade zaporne mocniny
    if (exponent < 0) {
        zaklad = 1/zaklad;
        exponent = -exponent;
    }
    double vysledek = 1;
    while (exponent != 0) {
        vysledek *= zaklad;
        --exponent;
    }

    vysledek = vysledek+hlavniHodnota;
    return vysledek;
}

double odmocnina(double hlavniHodnota) {
    printf("Odmocnene cislo bude pricteno k vysledku.\n");
    printf("Zadejte cislo ktere chcete odmocnit: ");
    double cislo;
    scanf("%lf", &cislo);
    cislo = sqrt(cislo);
    cislo = cislo+hlavniHodnota;
    return cislo;
}

double procento(double hlavniHodnota) {
    printf("Zvolili jste procento.\n");
    printf("Zadejte jake procento z vysledku chcete: ");
    double cislo;
    scanf("%lf", &cislo);
    cislo = (cislo/100)*hlavniHodnota;
    return cislo;
}

int vyberOperace() {
    printf("Zadejte cislo operace, kterou chcete zvolit.\n");
    int operace;
    while (scanf("%d", &operace) != 1) {
      printf("Zadali jste cislo spatne.\n");
      printf("Zadejte cislo znovu: ");
      while (getchar() != '\n');
    }
    return operace;
}


int main()
{
    double hlavniHodnota = 0;
    int programBezi = 1;
    do {
        vypisMenu(hlavniHodnota);
        int operace = vyberOperace();
        switch (operace) {
        case 1:
            hlavniHodnota = 0;
            break;
        case 2:
            hlavniHodnota = scitani(hlavniHodnota);
            break;
        case 3:
            hlavniHodnota = odcitani(hlavniHodnota);
            break;
        case 4:
            hlavniHodnota = nasobeni(hlavniHodnota);
            break;
        case 5:
            hlavniHodnota = deleni(hlavniHodnota);
            break;
        case 6:
            hlavniHodnota = modulo(hlavniHodnota);
            break;
        case 7:
            hlavniHodnota = faktorial(hlavniHodnota);
            break;
        case 8:
            hlavniHodnota = mocnina(hlavniHodnota);
            break;
        case 9:
            hlavniHodnota = odmocnina(hlavniHodnota);
            break;
        case 10:
            hlavniHodnota = procento(hlavniHodnota);
            break;
        case 11:
            programBezi = 0;
            printf("Program ukoncen.");
            break;
        default:
            printf("\n\n\nCislo operace ktere jste zadali neni platne. Zadejte znova! \n");
            sleep(3);
        }
    } while (programBezi == 1);

    return 0;
}
