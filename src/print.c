#include "../lib/print.h"
#include "../lib/constants.h"

/**
 * @param noun Must be "Welcome, " or an empty string ""
 */
void print_welcome(char *noun)
{
    system("clear");
    printf("%sResponsive Units Tool v%s\n",noun,VERSION_SOFTWARE);
    printf("Type \".help\" for more information.\n\n");
}

void print_commands()
{
    printf(CLR_BLUE);
    printf(".clear  clean the terminal\n");
    printf(".cvter  show selected converter\n");
    printf(".exit   exit the program\n");
    printf(".help   print this help message\n");
    printf(".rem    convert px to rem\n");
    printf(".px     convert rem to px\n");
    printf(RESET_CLR);
}

/**
 * @param message Must be "Caution: What results do you want to obtain, px or rem?", 
 * "You must enter information." or "You must select a converter."
 */
void print_caution(char *message)
{
    printf(CLR_YELLOW);
    printf("%s\n",message);
    printf(RESET_CLR);
}

/**
 * @param converter Must be "px to rem" or "rem to px"
 */
void print_converter_enabled(char *converter)
{
    printf(CLR_GREEN);
    printf("Excellent: %s converter enabled.\n",converter);
    printf(RESET_CLR);
}

void print_error(char *string)
{
    printf(CLR_RED);
    printf("Error: \"%s\" is not accepted.\n",string);
    printf(RESET_CLR);
}

/**
 * @param converter Must be "REM" or "PX"
 */
void print_converter_selected(char *converter)
{
    printf(CLR_GREEN);
    printf("%s converter selected.\n",converter);
    printf(RESET_CLR);
}

/**
 * @param number Must be the final value
 * @param suffix Must be "rem" or "px"
 */
void print_result(float number, char *suffix)
{
    printf(CLR_GREEN);
    printf("%.9g%s\n",number,suffix);
    printf(RESET_CLR);
}

void print_bye()
{
    printf(CLR_BLUE);
    printf("Come back soon!.\n\n");
    printf(RESET_CLR);
}