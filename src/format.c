#include "../lib/format.h"
#include "../lib/constants.h"

void check_decimal_separator(char *string)
{
    for(int i = 0; i < strlen(string); i++)
    {
        if(string[i] == ',')
        {
            string[i] = '.';
        }
    }
}

/**
 * @param string string entered
 * @param converter selected converter
 * @return 1 = error in format or 0 = correct format
 */
int validating_format(char *string, int converter)
{
    regex_t regex;

    int return_value;

    if(converter == 0)
    {
        return_value = regcomp(&regex, GENERAL_REGULAR_EXPRESSION, REG_EXTENDED | REG_ICASE);
    }

    if(converter == 1)
    {
        return_value = regcomp(&regex, PX_REGULAR_EXPRESSION, REG_EXTENDED | REG_ICASE);
    }

    if(converter == 2)
    {
        return_value = regcomp(&regex, REM_REGULAR_EXPRESSION, REG_EXTENDED | REG_ICASE);
    }

    return_value = regexec(&regex, string, 0, NULL, 0);

    if(return_value == REG_NOMATCH)
    {
        return 1;
    }

    regfree(&regex);
    return 0;
}