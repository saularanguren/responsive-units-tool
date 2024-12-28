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

    char *expressions[] = {
        GENERAL_REGULAR_EXPRESSION,
        PX_REGULAR_EXPRESSION,
        REM_REGULAR_EXPRESSION
    };

    int return_value = regcomp(&regex, expressions[converter], REG_EXTENDED | REG_ICASE);

    return_value = regexec(&regex, string, 0, NULL, 0);
    regfree(&regex);

    return (return_value == REG_NOMATCH) ? 1 : 0;
}