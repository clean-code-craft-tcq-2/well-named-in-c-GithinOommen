#include <stdio.h>
#include <assert.h>
enum MajorColor {WHITE, RED, BLACK, YELLOW, VIOLET};
enum MinorColor {BLUE, ORANGE, GREEN, BROWN, SLATE};
extern const char* MajorColorNames[];
extern const char* MinorColorNames[];
extern int numberOfMinorColors;
extern int numberOfMajorColors;
extern const int MAX_COLORPAIR_NAME_CHARS;

extern void testPairToNumber(enum MajorColor major,enum MinorColor minor,int expectedPairNumber);
typedef struct {
    enum MajorColor majorColor;
    enum MinorColor minorColor;
} ColorPair;

extern void testNumberToPair(int pairNumber,enum MajorColor expectedMajor,enum MinorColor expectedMinor);
extern void ColorPairToString(const ColorPair* colorPair, char* buffer);
extern int GetPairNumberFromColor(const ColorPair* colorPair);
extern ColorPair GetColorFromPairNumber(int pairNumber);
