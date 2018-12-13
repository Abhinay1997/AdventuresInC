#include <stdio.h>
#include <conio.h>
void main(){
    int i;
    char buf[3];
    // let's read chars into buf 
    for(i=0;i<=2;i++){
        printf("Enter the char \n");
        buf[i] = getch();
        printf("%c \n",buf[i]);
    }
    printf("Let's print them in reverse \n");
    for(i;i>=0;i--){
        printf("%c",buf[i]);
    }
    // Interesting things: getch works without including conio.h in header.
    // Also in the above program, if you press Carriage Return (Enter), the char read is \r
    // So while printing in reverse,if buf[1] = '/r' it prints the last character in buf then
    // goes to beginning of line (equivalent to printing /r) and prints buf[0] giving the appearance 
    // that the reversing logic is failing. WoW ! 
    // Note that working with warning level W3 issues this warning:
    // warning C4996: 'getch': The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _getch. 
    // refer: https://stackoverflow.com/a/814983
}