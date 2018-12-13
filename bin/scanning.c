#include <stdio.h>
#include <stdlib.h>

void main(){
    char class_name[5],name[5],waste;
    int age;
    printf("Enter your name \n");
    scanf("%s",name);
    // when reading to char arrays we don't specify & 
    printf("Enter your age \n");
    scanf("%d",&age);
    // when reading other values we specify &
    // what about while printing ?
    printf("Name is %s",name);
    printf("and age is %d",age);
    //refer https://stackoverflow.com/questions/1931850/why-doesnt-scanf-need-an-ampersand-for-strings-and-also-works-fine-in-printf-i
    //also giving a string input greater than 4 (5 if including the null terminator) doesnt affect scanf's ability to take input.
    //refer https://www.quora.com/In-C-why-could-a-string-of-size-10-accept-more-than-the-given-size-and-it-could-also-print-that-string-with-all-characters 
    //scanf doesn't have buffer overflow protection. It is recommended to use fgets to read input and sscanf to process it.
    //refer https://stackoverflow.com/questions/1247989/how-do-you-allow-spaces-to-be-entered-using-scanf/1247993#1247993
    //On a side note the above link also discusses how scanf can handle regex 
    //Let's see how fgets handles data larger than buffer
    //fgets is usally used to read file streams. However it also takes stdin as input stream. Let's see
    printf("Let's test fgets. Max size is 4 \n");
    fgets(class_name,4,stdin);
    // Note: now did you observe that the fgets doesn't wait for input ? It's because of scanf. When scanf finishes reading,
    // it leaves the \n in the buffer which is read by fgets and terminates fgets.
    // How do we overcome this ?
    // refer: https://www.geeksforgeeks.org/problem-with-scanf-when-there-is-fgetsgetsscanf-after-it/
    //We can make scanf() to read a new line by using an extra “\n”, i.e., scanf(“%d\n”, &x) . In fact scanf(“%d “, &x) also works (Note extra space).
    //or We can add a getchar() after scanf() to read an extra newline.
    
}