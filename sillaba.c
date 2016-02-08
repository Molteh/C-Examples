 #include <string.h>
 #include <stdio.h>
 #include <stdlib.h>

char* sillaba(char* parola) {

char* sillabato=(char *)malloc(2*strlen(parola)*sizeof(char));
char* remember = sillabato;

void delTratAddTerminator(char *sillabato) {
    *--sillabato='\0';
}

void singolSillaba() {
        *sillabato=*parola;
        sillabato++;
        parola++;
        *sillabato=*parola;
        sillabato++;
        parola++;
}

void aggiungiTrattino() {
        *sillabato='-';
        sillabato++;
}

void tagliaVocale() {
    *sillabato = *parola;
    sillabato++;
   *sillabato = '-';
    sillabato++;
   parola++;
}


if(startWithVoc(*parola)==0){
   tagliaVocale();
   }

    while(*parola!='\0') {
        singolSillaba();
        aggiungiTrattino();
    }
    delTratAddTerminator(sillabato);

    return remember;
}
