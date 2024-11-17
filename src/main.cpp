#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <windows.h>

void chiediData(int* month, int* day, int* year){
    
                                                                                                        // richiesta all'utente di inserire i dati
    printf(" _________________________________________________\n");
    printf("|                                                 |\n");
    printf("| inserisci la tua data di nascita.               |\n");
    printf("| io restituiro' il tuo segno zodiacale:          |\n");
    printf("|_________________________________________________|\n");
                                                                                                        //richiesta inserimento mese
    printf(" _________________________________________________\n");
    printf("|                                                 |\n");
    printf("| inserisci il mese:                              |\n");
    printf("|_________________________________________________|\n");
    scanf("%d", month);
                                                                                                        //richiesta inserimento giorno
    printf(" _________________________________________________\n");
    printf("|                                                 |\n");
    printf("| inserisci il giorno:                            |\n");
    printf("|_________________________________________________|\n");
    scanf("%d", day);
                                                                                                        //richiesta inserimento anno
    printf(" _________________________________________________\n");
    printf("|                                                 |\n");
    printf("| inserisci l'anno:                               |\n");
    printf("|_________________________________________________|\n");
    scanf("%d", year);

                                                                                                        // nel caso il giorno non esista
    while (*day < 1 || *day > 31)
    {
        printf(" _____________________________________________\n");
        printf("|                                             |\n");
        printf("|    giorno non disponibile, reinserirlo:     |\n");
        printf("|_____________________________________________|\n");
        scanf("%d", day);
    }

                                                                                                        // nel caso il mese non esista
    while (*month < 1 || *month > 12)
    {
        printf(" _____________________________________________\n");
        printf("|                                             |\n");
        printf("|     mese non disponibile, reinserirlo:      |\n");
        printf("|_____________________________________________|\n");
        scanf("%d", month);
    }
}
                                                                                                        //controllo anno bisestile
int anno(int* year){
    int i=0;
    int anno_bisestile = 0;
    for(i=1904;i<2000;i=i+4){
        if(*year==i){
            anno_bisestile++;
        }
    }
    for(i=2004;i<2100;i=i+4){
        if(*year==i){
            anno_bisestile++;
        }
    }
}
                                                                                                        //calcolo del segno zodiacale
void zodiacSign(int* month, int* day, int* year, int anno_bisestile){
    
    switch (*month)
    {
                                                                                                        //se il mese inserito è gennaio
    case 1:
    {
        if (*day >= 1 && *day <= 19)
        {
            printf("capricorno\n");
            readimagefile("capricorno.jpg", 0, 0, 626, 626);
        }
        else if (*day >= 20 && *day <= 31)
        {
            printf("acquario\n");
            readimagefile("acquario.jpg", 0, 0, 626, 626);
        }
        if (*day == 1 || *day == 19 || *day == 20 || *day == 31)
        {
            printf("cuspide\n");
        }
        getch();
        break;
    }
                                                                                                        //se il mese inserito è febbraio
    case 2:
    {
        if (*day >= 1 && *day <= 19)
        {
            printf("acquario\n");
            readimagefile("acquario.jpg", 0, 0, 626, 626);
        }
        else if (*day >= 20 && *day <= 28)
        {
            printf("pesci\n");
            readimagefile("pesci.jpg", 0, 0, 626, 626);
        }
        else if (*day==29 && anno_bisestile==1){
            printf("cuspide\n");
            readimagefile("pesci.jpg", 0, 0, 626, 626);
        }
        
        if (*day == 1 || *day == 19 || *day == 20 || *day == 28)
        {
            printf("cuspide\n");
        }
                
        getch();
        break;
    }
                                                                                                        //seil mese inserito è marzo
    case 3:
    {
        if (*day >= 1 && *day <= 20)
        {
            printf("pesci\n");
            readimagefile("pesci.jpg", 0, 0, 626, 626);
        }
        else if (*day >= 21 && *day <= 31)
        {
            printf("ariete\n");
            readimagefile("ariete.jpg", 0, 0, 626, 626);

            if (*day == 1 || *day == 20 || *day == 21 || *day == 31)
            {
                printf("cuspide\n");
            }
            getch();
            break;
        }
    }
                                                                                                        //se il mese inserito è aprile
    case 4:
    {
        if (*day >= 1 && *day <= 19)                                                                    //controllo intervallo segno zodiacale nel mese
        {
            printf("ariete\n");
            readimagefile("ariete.jpg", 0, 0, 626, 626);
        }
        else if (*day >= 20 && *day <= 30)
        {
            printf("toro\n");
            readimagefile("toro.jpg", 0, 0, 626, 626);
        }
        if (*day == 1 || *day == 19 || *day == 20 || *day == 30)
        {
            printf("cuspide\n");
        }
        getch();
        break;
    }
                                                                                                        //se il mese inserito è maggio
    case 5:
    {
        if (*day >= 1 && *day <= 20)
        {
            printf("toro\n");
            readimagefile("toro.jpg", 0, 0, 626, 626);
        }
        else if (*day >= 21 && *day <= 31)
        {
            printf("gemelli\n");
            readimagefile("gemelli.jpg", 0, 0, 626, 626);
        }
        if (*day == 1 || *day == 20 || *day == 21 || *day == 31)
        {
            printf("cuspide\n");
        }
        getch();
        break;
    }
                                                                                                        //se il mese inserito è giugno
    case 6:
    {
        if (*day >= 1 && *day <= 20)
        {
            printf("gemelli\n");
            readimagefile("gemelli.jpg", 0, 0, 626, 626);
        }
        else if (*day >= 21 && *day <= 30)
        {
            printf("cancro\n");
            readimagefile("cancro.jpg", 0, 0, 626, 626);
        }
        if (*day == 1 || *day == 20 || *day == 21 || *day == 30)
        {
            printf("cuspide\n");
        }
        getch();
        break;
    }
                                                                                                        //se il mese inserito è luglio
    case 7:
    {
        if (*day >= 1 && *day <= 22)
        {
            printf("cancro\n");
            readimagefile("cancro.jpg", 0, 0, 626, 626);
        }
        else if (*day >= 23 && *day <= 31)
        {
            printf("leone\n");
            readimagefile("leone.jpg", 0, 0, 626, 626);
        }
        if (*day == 1 || *day == 22 || *day == 23 || *day == 31)
        {
            printf("cuspide\n");
        }
        getch();
        break;
    }
                                                                                                        //se il mese inserito è agosto
    case 8:
    {
        if (*day >= 1 && *day <= 23)
        {
            printf("leone\n");
            readimagefile("leone.jpg", 0, 0, 626, 626);
        }
        else if (*day >= 24 && *day <= 31)
        {
            printf("vergine\n");
            readimagefile("vergine.jpg", 0, 0, 626, 626);
        }
        if (*day == 1 || *day == 23 || *day == 24 || *day == 31)
        {
            printf("cuspide\n");
        }
        getch();
        break;
    }
                                                                                                        //se il mese inserito è settembre
    case 9:
    {
        if (*day >= 1 && *day <= 22)
        {
            printf("vergine\n");
            readimagefile("vergine.jpg", 0, 0, 626, 626);
        }
        else if (*day >= 23 && *day <= 30)
        {
            printf("bilancia\n");
            readimagefile("bilancia.jpg", 0, 0, 626, 626);
        }
        if (*day == 1 || *day == 22 || *day == 23 || *day == 30)
        {
            printf("cuspide\n");
        }
        getch();
        break;
    }
                                                                                                        //se il mese inserito è ottobre
    case 10:
    {
        if (*day >= 1 && *day <= 22)
        {
            printf("bilancia\n");
            readimagefile("bilancia.jpg", 0, 0, 626, 626);
        }
        else if (*day >= 23 && *day <= 31)
        {
            printf("scorpione\n");
            readimagefile("scorpione.jpg", 0, 0, 626, 626);
        }
        if (*day == 1 || *day == 22 || *day == 23 || *day == 31)
        {
            printf("cuspide\n");
        }
        getch();
        break;
    }
                                                                                                        //se il mese inserito è novembre
    case 11:
    {
        if (*day >= 1 && *day <= 21)
        {
            printf("scorpione\n");
            readimagefile("scorpione.jpg", 0, 0, 626, 626);
        }
        else if (*day >= 22 && *day <= 30)
        {
            printf("saggittario\n");
            readimagefile("saggittario.jpg", 0, 0, 626, 626);
        }
        if (*day == 1 || *day == 21 || *day == 22 || *day == 30)
        {
            printf("cuspide\n");
        }
        getch();
        break;
    }
                                                                                                        //se il mese inserito è dicembre
    case 12:
    {
        if (*day >= 1 && *day <= 21)
        {
            printf("saggittario\n");
            readimagefile("saggittario.jpg", 0, 0, 626, 626);
        }
        else if (*day >= 22 && *day <= 31)
        {
            printf("capricorno\n");
            readimagefile("capricorno.jpg", 0, 0, 626, 626);

            if (*day == 1 || *day == 21 || *day == 22 || *day == 31)
            {
                printf("cuspide\n");
            }
            getch();
            break;
        }
    }
    }
}
                                                                                                        //main
int main(){
    int month1 = 0, day1 = 0, year1 = 0, anno_bisestile1 = 0;                                           //inizializzazione variabili
    
    chiediData(&month1, &day1, &year1);                                                                 //inserimento data di nascita                                             

    initwindow(626, 626, "Zodiaco");                                                                    //inizializzazione finestra grafica
    readimagefile("errore.jpg", 0, 0, 626, 626);                                                        //inserimento immagine di errore nel caso non venisse restituito nessun segno zodiacale

    anno(&year1);                                                                                       //controllo anno bisestile

    zodiacSign(&month1, &day1, &year1, anno_bisestile1);                                                //calcolo segno zodiacale
    getch();
    return 0;
}
