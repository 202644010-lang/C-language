#include <stdio.h>
#include<string.h>

char tracks[][80]={
    "I left my heart in Harvard Med School",
    "Newark,Newark -a qonderful town",
    "Dancing with a Dork",
    "From here to maternity",
};

void find_track(char search_for[])
{
    int i;
    for(i=0; i<5; i++) {
        if(strstr(tracks[i],search_for))
           printf("노래 %i:'%s'\n",i,tracks[i]);
    }
};