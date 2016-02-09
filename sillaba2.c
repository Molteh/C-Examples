 #include <string.h>
 #include <stdio.h>
 #include <stdlib.h>

struct twoPointers{
char* sillabato;
char* parola };

struct twoPointers singolSillaba(char* sillabato, char* parola) {
        *sillabato=*parola;
        sillabato++;
        parola++;
        *sillabato=*parola;
        sillabato++;
        parola++;
        struct twoPointers result = {sillabato, parola};
        return result;
}

struct twoPointers tagliaVocale(char* sillabato, char* parola) {
   *sillabato = *parola;
   sillabato++;
   *sillabato = '-';
   sillabato++;
   parola++;
   struct twoPointers result = {sillabato, parola};
   return result;
}


int startWithVoc(char c){
    if(strchr("aeiou", c)!=NULL) return 0;
    return 1;
}

void delTratAddTerminator(char *sillabato) {
    *--sillabato='\0';
}

char* aggiungiTrattino(char* sillabato) {
        *sillabato='-';
        sillabato++;
        return sillabato;
}

char* sillaba(char* parola) {

char* sillabato=(char *)malloc(2*strlen(parola)*sizeof(char));
char* remember = sillabato;

if(startWithVoc(*parola)==0){
   struct twoPointers result = tagliaVocale(sillabato, parola);
   sillabato = result.sillabato;
   parola = result.parola;
   }

    while(*parola!='\0') {
        struct twoPointers result =singolSillaba(sillabato, parola);
        sillabato = result.sillabato;
        parola = result.parola;
        sillabato = aggiungiTrattino(sillabato);
    }
    delTratAddTerminator(sillabato);

    return remember;
}



 int main() {
char* par = "camera";
char* f = sillaba("evadere");

printf("%s\n", f);
char* f2 = sillaba("asino");

printf("%s\n", f2);

printf("%i\n", strcmp(sillaba("evadere"),"e-va-de-re"));
printf("%i\n", strcmp(sillaba("asino"),"a-si-no"));


      }
