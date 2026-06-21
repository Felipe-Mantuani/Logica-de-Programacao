#include <stdio.h>

typedef struct{
    int horas;
    int minutos;
} THorario;

THorario tempo(int minutos){
    THorario tempo;
    tempo.horas = minutos/60;
    tempo.minutos = minutos%60;
    return tempo;

}

int main(){
    THorario teste = tempo(60);
    printf("%d hora e %d minutos", teste.horas, teste.minutos);
}