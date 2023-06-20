//          D                 J                 P                 V
//       C     E           I     K           O     Q           U     W
//    B           F     H           L     N           R     T           X     
// A                 G                 M                 S                 Y

#include<stdio.h>
int main(){
    int waveHeight=4;
    int wl=4;
    int wh=waveHeight-1;
    char ch;
    int x=wh;
    int i,j;
    for(i=0;i<=wh;i++){
        ch='A';
        for(j=0;j<=wh*wl*2;j++){

            if(j%(wh*2)==x||j%(wh*2)==wh+i){
                printf("%c  ",ch);
            }
            else{
                printf("   ");
            }
            ch++;
            if(ch>'Z'){
                ch=ch-26;            }
        }
    x--;
        printf("\n");
    }
}
