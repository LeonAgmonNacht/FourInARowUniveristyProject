#include "SPFIARParser.h"
#include <ctype.h>
#include <string.h>

/**
 * Removing leading whitespaces
 * @return a Pointer to the new string
 */
char* trimLeadingWhitespaces(char* str)
{
    while (isspace((unsigned char)*str))
        str++;
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
        if (str[0] < ZERO_ASCII_VALUE || str[0] > NINE_ASCII_ZERO)
            return false;
        ++str;
    }
    return true;
}

SPCommand spParserPraseLine(const char* str) {

    SPCommand cmd;
    cmd.cmd = SP_INVALID_LINE;
    cmd.validArg = false;
    char* add_disc_string = "add_disc";
    // No params commands:

    if (strcmp(str, SUGGEST_MOVE_STRING)) {
        cmd.cmd = SP_SUGGEST_MOVE;
    }
    else if (strcmp(str, UNDO_MOVE_STRING)) {
        cmd.cmd = SP_UNDO_MOVE;
    }
    else if (strcmp(str, QUIT_STRING)) {
        cmd.cmd = SP_QUIT;
    }
    else if (strcmp(str, RESTART_GAME_STRING)) {
        cmd.cmd = SP_RESTART;
    }

    // Commands with params:
    else if (strncmp(add_disc_string, str, strlen(add_disc_string))) {
        // TODO: FIX char* arg_string = trimLeadingWhitespaces(str+strlen(add_disc_string));
        char* arg_string = ""; // TODO: Delete after fix
        if (!spParserIsInt(arg_string)) {
            return cmd;
        }
        cmd.cmd = SP_ADD_DISC;
        cmd.validArg = true;
        //cmd.arg = arg;
    }

    return cmd;
}
