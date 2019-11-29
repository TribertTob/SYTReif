//
// Created by Tobias on 22.11.2019.
//
#include <stdbool.h>
#include <stdio.h>
#include <string.h>

static FILE *file;

bool reportOpenFile(char *source){
    if((file=fopen(source,"r"))==NULL) {
        return false;
    }else {
        return true;
    }
}

bool reportReport(){
    int zeilen=0;
    int post=0;
    int get=0;
    int nothing=0;
    int smartphone=0;
    char* line=NULL;
    size_t len;
    ssize_t read;

    while((read=getline(&line,&len,file))!= -1){
        zeilen++;
        if (strstr(line, "GET") != NULL){
            get++;
        }else if(strstr(line,"POST")!=NULL){
            post++;
        }else{
            nothing++;
        }

        if(strstr(line,"Android")!=NULL){
            smartphone++;
        } else if(strstr(line,"iPhone")!=NULL){
            smartphone++;
        }
    }
    printf("Posts: %d / Gets: %d / Nothing: %d\n",post,get,nothing);
    printf("Zeilen: %d\n%d",zeilen,smartphone);

return true;
}
bool reportCloseFile(){
    fclose(file);
    return true;
}