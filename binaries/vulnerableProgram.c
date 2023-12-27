#include <stdio.h>
#include <string.h>
int copyit(char *source_str){
    char buffer[128];
    strcpy(buffer,source_str);
    printf("%s",buffer);
    return 0;
}
int main(int argc, char *argv[]){
    copyit(argv[1]);
    return 0;
}