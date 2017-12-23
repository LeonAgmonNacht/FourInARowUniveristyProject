#include "SPFIARParser.h"
#include <ctype.h>
#include <string.h>

/**
 * Removing leading whitespaces
 * @return a Pointer to the new string
 */
char* trimLeadingWhitespaces(char* str)
{
    while(str++[0] == ' ');
    return str;

}

bool spParserIsInt(const char* str) {
    // TODO: CHECK FOR OVERFLOW/UNDERFLOW
    // Check if the string is empty:
    if (!*str) return false;
    // If this is a negative number, advance pointer so it will represent a positive integer:
    if (*str == '-') ++str;

    // Loop the string chars and check for a non-digit char:
    while (*str)
    {
        if (str[0] < 48 || str[0] > 57)
            return false;
        ++str;
    }
    return true;
}

SPCommand spParserPraseLine(const char* str) {

    SPCommand cmd;
    char* add_disc_string = "add_disc";
    // No params commands:

    if (strcmp(str, "suggest_move")) {
        cmd.cmd = SP_SUGGEST_MOVE;
    }
    else if (strcmp(str, "undo_move")) {
        cmd.cmd = SP_UNDO_MOVE;
    }
    else if (strcmp(str, "quit")) {
        cmd.cmd = SP_QUIT;
    }
    else if (strcmp(str, "restart_game")) {
        cmd.cmd = SP_RESTART;
    }

    // Commands with params:
    else if (strncmp(add_disc_string, str, strlen(add_disc_string))) {
        // TODO: CHECK IF PARAMETER IS VALID, UPDATE CMD AND RETURN IT
        //cmd.cmd = SP_ADD_DISC;
        //cmd.validArg = true;
        //cmd.arg = arg;
    }
    else {
        cmd.cmd = SP_INVALID_LINE;
    }

    return cmd;
}