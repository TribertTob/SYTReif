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
    int mozilla=0;
    int chrome=0;
    int safari=0;
    int apache=0;
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

        if(strstr(line, "Mozilla") != NULL){
            mozilla++;
        } if(strstr(line, "Chrome") != NULL){
            chrome++;
        }if(strstr(line, "Safari") != NULL){
            safari++;
        }if(strstr(line, "Apache") != NULL){
            apache++;
        }
    }

    printf("Posts: %d / Gets: %d / Nothing: %d\n",post,get,nothing);
    printf("Zeilen: %d\nSmartphones: %d",zeilen,smartphone);
    printf("\nMozilla: %d\nChrome: %d\nSafari: %d\nApache: %d",mozilla,chrome,safari,apache);

return true;
}
bool reportCloseFile(){
    fclose(file);
    return true;
}