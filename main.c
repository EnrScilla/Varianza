#include <stdio.h>
#include <math.h>
#define MAX 50

void riempiArray(float *,int);
void stampaArray(float *,int);
float MediaArray(float *,int);
float varianza_Array(float *,int);

int main() {

    int n;
    float a[MAX],varianza=0.0F;

    printf("Inserisci la dimensione dell'array:\n");
    scanf("%d",&n);

    riempiArray(a,n);
    stampaArray(a,n);
    varianza=varianza_Array(a,n);
    printf("La varianza e':%f\n",varianza);

    return 0;
}

void riempiArray(float *a,int n){
    int i;
    printf("Inserisci i %d elementi dell'Array:\n",n);
    for(i=0;i<n;i++)
       scanf("%f",&a[i]);

}

void stampaArray(float *a,int n){
    int i;

       for(i=0;i<n;i++)
           printf(" %f",a[i]);
}

float MediaArray(float *a,int n){
    int i;
    float media=0.0F;

    for(i=0;i<n;i++)
        media += a[i];

    media=media/(float) n;

    return media;
}

float varianza_Array(float *a,int n){
    int i;
    float varianza=0.0F,media=0.0F;

    media = MediaArray(a,n);

    for(i=0;i<n;i++)
        varianza += pow(a[i] - media,2.0F);

    varianza = varianza/(float)(n-1);

 return varianza;


}
