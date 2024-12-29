#include <stdio.h>
#include <string.h>
#include "../lib/messages.h"
#include "../lib/clipboard.h"
#include "../lib/validations.h"
#include "../lib/conversions.h"

int main()
{
    char string_input[50];

    /**
     * 0 = NULL
     * 1 = REM
     * 2 = PX
     */
    int converter_selected = 0;

    print_welcome("Welcome, ");

    while(1)
    {
        printf("~ ");
        fgets(string_input, 50, stdin);
        // remove line break
        string_input[strlen(string_input) - 1] = '\0';
        // clear buffer
        fflush(stdin);        

        if(strcmp(string_input, "") == 0)
        {
            print_caution("You must enter information.");
            continue;
        }

        if(strcmp(string_input, ".clear") == 0)
        {
            print_welcome("");
            continue;
        }

        if(strcmp(string_input, ".cvter") == 0)
        {
            switch (converter_selected)
            {
                case 0:
                    print_caution("You must select a converter.");
                    break;

                case 1:
                    print_converter_selected("REM");
                    break;

                case 2:
                    print_converter_selected("PX");
                    break;
            }

            continue;
        }

        if(strcmp(string_input, ".exit") == 0)
        {
            print_bye();
            break;
        }

        if(strcmp(string_input, ".help") == 0)
        {
            print_commands();
            continue;
        }

        if(strcmp(string_input, ".rem") == 0)
        {
            converter_selected = 1;
            print_converter_enabled("px to rem");
            continue;
        }

        if(strcmp(string_input, ".px") == 0)
        {
            converter_selected = 2;
            print_converter_enabled("rem to px");
            continue;
        }

        // validating input format
        if(validating_format(string_input, converter_selected) == 0)
        {
            check_decimal_separator(string_input);
            float number = atof(string_input);

            switch (converter_selected)
            {
                case 0:
                    print_caution("Caution: What results do you want to obtain, px or rem?");
                    break;

                case 1:
                    float rem = converter_rem(number);
                    print_result(rem, "rem");
                    copy_on_clipboard(rem, "rem");
                    break;

                case 2:
                    float px = converter_px(number);
                    print_result(px, "px");
                    copy_on_clipboard(px, "px");
                    break;
            }

            continue;
        }
        else
        {
            print_error(string_input);
        }
    }

    return 0;
}