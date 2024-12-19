#include "../lib/copy.h"

/**
 * @param result Must be the final value
 * @param suffix Must be "rem" or "px"
 */
void copy_on_clipboard(float result, char *suffix)
{
    char code[100];
    snprintf(code,100,"echo -n '%.9g%s' | xclip -selection clipboard",result,suffix);
    system(code);
}