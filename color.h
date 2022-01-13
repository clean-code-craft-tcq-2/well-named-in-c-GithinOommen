#include <stdio.h>
#include <assert.h>
enum MajorColor {WHITE, RED, BLACK, YELLOW, VIOLET};
enum MinorColor {BLUE, ORANGE, GREEN, BROWN, SLATE};

const char* MajorColorNames[] = {
    "White", "Red", "Black", "Yellow", "Violet"
};
static int numberOfMajorColors =
    sizeof(MajorColorNames) / sizeof(MajorColorNames[0]);
static const char* MinorColorNames[] = {
    "Blue", "Orange", "Green", "Brown", "Slate"
};
static const int MAX_COLORPAIR_NAME_CHARS = 16;
static int numberOfMinorColors =
    sizeof(MinorColorNames) / sizeof(MinorColorNames[0]);

typedef struct {
    enum MajorColor majorColor;
    enum MinorColor minorColor;
} ColorPair;
