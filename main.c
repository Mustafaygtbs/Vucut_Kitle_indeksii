#include <stdio.h>
#include <stdlib.h>

int main()
{
    float boy;
     float kilo;
     char cinsiyet;
     float idealkilo;
     float vki;

     printf("erkeksen:e,E kadinsan:k,K ye basiniz.\n");
     scanf("%c", &cinsiyet);
     printf("Boyunuzu metre cinsinden giriniz.\n");
     scanf("%f", &boy);
     printf("kilonuzu kilogram cinsinden giriniz.\n");
     scanf("%f", &kilo);
     switch (cinsiyet)
     {
     case 'k':
     case 'K':
         if (boy <= 1.5)
         {
             idealkilo = 45;
             printf("ideal kilonuz:%.2f\n", idealkilo);
             vki = (kilo / (boy * boy));
             printf("Vucut kitle indeksiniz:%.2f\n", vki);
             if (vki < 19.1)
             {
                 printf("Zayýfsýnýz. Saðlýk riski var.\n");
             }
             else if (19.1 <= vki && vki < 25.8)
             {
                 printf("Normalsiniz. Risk yok.\n");
             }
             else if (25.8 <= vki && vki < 32.2)
             {
                 printf("Þiþmanlýk sýnýrýnda ya da þiþmansýnýz. Risk var.\n");
             }
             else
             {
                 printf("Obezite. Ciddi risk var.\n");
             }
         }
         else
         {
             idealkilo = 45 + (((boy - 1.5) / 0.025) * 2.2);
             printf("ideal kilonuz:%.2f\n", idealkilo);
             vki = (kilo / (boy * boy));
             printf("Vucut kitle indeksiniz:%.2f\n", vki);
             if (vki < 19.1)
             {
                 printf("Zayifsiniz. Saglik riski var.\n");
             }
             else if (19.1 <= vki && vki < 25.8)
             {
                 printf("Normalsiniz. Risk yok.\n");
             }
             else if (25.8 <= vki && vki < 32.2)
             {
                 printf("Sismanlik sýnýrýnda ya da sismansiniz. Risk var.\n");
             }
             else
             {
                 printf("Obezite. Ciddi risk var.\n");
             }
         }

         break;

     case 'e':
     case 'E':
         if (boy <= 1.5)
         {
             idealkilo = 48;
             printf("ideal kilonuz:%.2f\n", idealkilo);
             vki = (kilo / (boy * boy));
             printf("Vucut kitle indeksiniz:%.2f\n", vki);
             if (vki < 20.7)
             {
                 printf("Zayýfsýnýz. Saðlýk riski var.\n");
             }
             else if (20.7 <= vki && vki < 26.4)
             {
                 printf("Normalsiniz. Risk yok.");
             }
             else if (26.5 <= vki && vki < 31.1)
             {
                 printf("Sismanlik sýnýrýnda ya da sismansiniz. Risk var.\n");
             }
             else
             {
                 printf("Obezite. Ciddi risk var.\n");
             }
         }
         else

         {
             idealkilo = 48 + (((boy - 1.5) / 0.025) * 2.7);
             printf("ideal kilonuz:%.2f\n", idealkilo);
             vki = (kilo / (boy * boy));
             printf("Vucut kitle indeksiniz:%.2f\n", vki);
             if (vki < 20.7)
             {
                 printf("Zayifsiniz. Saglik riski var.\n");
             }
             else if (20.7 <= vki && vki < 26.4)
             {
                 printf("Normalsiniz. Risk yok.\n");
             }
             else if (26.5 <= vki && vki < 31.1)
             {
                 printf("Sismanlik sýnýrýnda ya da sismansiniz. Risk var.\n");
             }
             else
             {
                 printf("Obezite. Ciddi risk var.\n");
             }
         }

         break;

}
}
