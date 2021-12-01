#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/ioctl.h>
#include <ctype.h>
#include <sys/ipc.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "textlcd.h"

int main(int argc, char **argv){
    
    textlcdLibInit();
    lcdtextwrite("1", "Success");
    sleep(2);
    lcdtextwrite("2", "Exit");
    textlcdLibExit();
}