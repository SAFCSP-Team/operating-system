#include <stdio.h>


int main(){
    FILE* fptr;

    // fopen( <File-Path>, <Options>);
    fptr = fopen("file.txt","r"); //r: read mode

    if(fptr != NULL){
        printf("File opened successfully! \n");
    }else{
        perror("There was an issue opening the file \n");
    }

    return 0;
}