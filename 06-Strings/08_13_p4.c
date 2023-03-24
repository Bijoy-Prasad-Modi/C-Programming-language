#include<stdio.h>
void slice ();
int main(){
char st [] = "BETTERTHANYESTERDAY";
slice (st,2,9);
printf("%s",st);
    return 0;
}
void slice(char *st , int m ,int n){
    int i = 0;
    while ((m+i)<n){
        st[i]=st[i+m];
        i++;
    }
    st[i]='\0';
}