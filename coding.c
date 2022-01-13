#include <stdio.h>
#include <assert.h>
#include "color.h"
void colorCoding()
{
    int i;
 for(i=1;i<=25;++i)
{
    ColorPair colorPair = GetColorFromPairNumber(i);
    char colorPairNames[MAX_COLORPAIR_NAME_CHARS];
    ColorPairToString(&colorPair, colorPairNames);
    printf("code %d :  %s\n", i,colorPairNames);
}   
}
