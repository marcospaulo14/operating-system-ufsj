#ifndef HORSE_H
#define HORSE_H

#include "terminal_control.h"

//Stick-horse body parts
#define HORSE_HEAD "        _"
#define HORSE_BODY "  ,____/"
static const char *HORSE_LEGS[] = {
    "  // // ",
    "   \\\\// ",
    "   \\\\ \\\\",
    "  //  \\\\"
};

#define HORSE_FRAMES 4

static const char *HORSE_COLORS[] = {
    TC_GRN,
    TC_RED,
    TC_BLU,
    TC_YEL,
    TC_MGT,
    TC_CYA,
};

void print_horse( int row, int col, int leg, int color_key) {

    printf("%s", HORSE_COLORS[color_key % 6]); //set horse color

    tc_mv_cursor(row, col);
    printf("%s", HORSE_HEAD);

    tc_mv_cursor(row + 1, col);
    printf("%s", HORSE_BODY);

    tc_mv_cursor(row + 2, col);
    printf("%s", HORSE_LEGS[leg % HORSE_FRAMES]);

    printf("%s", TC_RST); //reset terminal color
}

#endif
