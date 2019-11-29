#include <stdio.h>
#include "report.h"


int main() {



    if(reportOpenFile("C:\\Users\\tobia\\CLionProjects\\GetStarted\\access.log.6")) {
        if (reportReport()) {
            if (reportCloseFile()) {}
            else {
                printf("Error while closing file!\n");
            }
        } else {
            if (reportCloseFile()) {}
            else {
                printf("Error while closing file!\n");
            }
            printf("Error processing file!\n");
        }
    } else{
        if (reportCloseFile()) {}
        else {
            printf("Error while closing file!\n");
        }
        printf("Error while opening file!\n");
    }

    return 0;

}