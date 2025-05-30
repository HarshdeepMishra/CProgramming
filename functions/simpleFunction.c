#include <Stdio.h>
void message();  /* function prototype declaration*/
int main(){
    message(); /* function call */
    printf("Hello, World!\n");
    return 0;
}
void message() { /* function definition */
    printf("This is a simple function in C.\n");
}