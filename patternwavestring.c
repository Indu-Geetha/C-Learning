//          T                 D                 F                 E
//       T     E           O     I           S     U           L     A
//    A           R     C           N     I           N     O           R     
// P                 N                 G                 T                 N

#include<stdio.h>
int main(){
    int waveHeight=4;
    int wl=4;
    int wh=waveHeight-1;
    char ch[]="PATTERNCODINGISFUNTOLEARN";
    int x=wh;
    int i,j;
    for(i=0;i<=wh;i++){
        for(j=0;j<=wh*wl*2;j++){

            if(j%(wh*2)==x||j%(wh*2)==wh+i){
                printf("%c  ",ch[j]);
            }
            else{
                printf("   ");
            }
            // ch++;
            // if(ch>'Z'){
            //     ch=ch-26;            }
        }
    x--;
        printf("\n");
    }
}
