#include<stdio.h>
#include<string.h>

struct masini{

        char marca[10];
        char model[10];
        float motor;
        char combustibil[10];
        int revizie;
        int mentenanta;
        int depreciere; 

    } car[10], x, aux;

int citire(){

FILE *fisier;
    fisier = fopen("date.txt","r");

    if(!fisier){
    printf("Fisierul are o eroare!");
    return 1;}

for (int i=0; i<10; i++){

        fscanf(fisier, "%s", car[i].marca);
        fscanf(fisier, "%s", car[i].model);
        fscanf(fisier, "%f", &car[i].motor);
        fscanf(fisier, "%s", car[i].combustibil);
        fscanf(fisier, "%d", &car[i].revizie);
        fscanf(fisier, "%d", &car[i].mentenanta);
        fscanf(fisier, "%d", &car[i].depreciere);
}

fclose(fisier);
return 0;
}

void ordonare_revizie(){

        for ( int i = 0; i<9; i++){
            for( int j = i+1; j<=9; j++)
                    if(car[i].revizie > car[j].revizie){

                            aux = car[i];
                            car[i] = car[j];
                            car[j] = aux;
                

                        }   


}
}

void ordonare_mentenanta(){

for ( int i = 0; i<9; i++){
            for( int j = i+1; j<=9; j++)
                    if(car[i].mentenanta > car[j].mentenanta){

                            aux = car[i];
                            car[i] = car[j];
                            car[j] = aux;
                

            }


}
}

void depreciere(){

for ( int i = 0; i<9; i++){
            for( int j = i+1; j<=9; j++)
                    if(car[i].depreciere > car[j].depreciere){

                            aux = car[i];
                            car[i] = car[j];
                            car[j] = aux;
                

            }


}
}

void afisare(){

    for(int i = 0; i<10; i++){
            printf("%s", car[i].marca);
            printf(" %s", car[i].model);
            printf(" %.1f", car[i].motor);
            printf(" %s", car[i].combustibil);
            printf(" %d", car[i].revizie);
            printf(" %d", car[i].mentenanta);
            printf(" %d\n", car[i].depreciere);
        }
}

int main(){

    citire();

        printf("Programul va afisa urmatoarele: \n");
        printf("Ordonarea crescatoare a celor 10 masini in functie de: cost revizie, cost mentenanta preventiva si deprecierea sa.\n");
        printf("PS: toate costurile sunt pe an");

        printf("Te rog sa alegi una dintre categorii si sa tastezi urmatoarele:\n");
        printf("1 pentru ordonarea dupa cost revizie\n");
        printf("2 pentru ordonare dupacosturi mentenanta\n");
        printf("3 pentru ordonare dupa depreciere\n");

        int ok = 0;
        int index;

        while(ok == 0){
                scanf("%d", &index);
                if(index == 1 || index == 2 || index == 3) ok = 1;
                else printf("Te rog sa introduci o valoare valida.\n");
        }

        if(index == 1) ordonare_revizie();
        else if (index == 2) ordonare_mentenanta();
        else if (index == 3)  depreciere();

    
    afisare();
    
        printf("\n");
        printf("Mai doresti sa afli ceva? Te rog sa specifici tastand Da sau Nu");

        char a[3];
        int ok1 = 0;
        while (ok1 == 0){
                scanf("%s", a);
                if((strcmp(a, "da") == 0) || (strcmp(a, "Da") == 0) || (strcmp(a, "dA") == 0) || (strcmp(a, "DA") == 0))
                        {
                                ok1 = 1; int main();
                        }
               else return 0;
        }

}