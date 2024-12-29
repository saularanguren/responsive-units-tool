#ifndef MESSAGES_H
#define MESSAGES_H

#include <stdio.h>
#include <stdlib.h>

void print_welcome(char *noun);
void print_commands();
void print_caution(char *message);
void print_converter_enabled(char *converter);
void print_error(char *string);
void print_converter_selected(char *converter);
void print_result(float number, char *suffix);
void print_bye();

#endif