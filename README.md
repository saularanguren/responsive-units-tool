# Responsive Units Tool

## Project Description

**Responsive Units Tool** is a tool designed to facilitate the conversion between web measurement units **`px`** and **`rem`**. This program allows users to perform conversions easily through specific commands, enhancing flexibility and adaptability in web design. Currently, this project is exclusively available for Linux; however, there are plans to extend support to Windows in the near future.

## Available Commands

The following commands allow the user to select the type of conversion they wish to perform:

- **`.clear`**: Clears the program
- **`.cvter`**: Displays the selected converter
- **`.exit`**: Ends the execution of the program
- **`.help`**: Shows the available commands
- **`.rem`**: Activates the converter from px to rem.
- **`.px`**: Activates the converter from rem to px.

## Program Validations

The program validates the type of converter being used at any given moment:

- **Converter from rem to px**:
  - Accepts negative or positive numbers.
  - Numbers can include commas or periods.
  - The suffix `rem` can be used.

- **Converter from px to rem**:
  - Accepts negative or positive numbers.
  - Numbers can include commas or periods.
  - The suffix `px` can be used.

### Common Errors

- **Incorrect use of suffixes**: The suffix `px` cannot be used when entering a value in rem, and vice versa. This will generate an error message.
- **Invalid data input**: If the user enters invalid data, an appropriate error message will be displayed.

## Motivation for the Project

This project arose from the need for an efficient tool to perform conversions between web measurement units: **px** and **rem**, thus facilitating the work of developers and web designers seeking to create responsive and adaptive interfaces.

## How to Use Responsive Units Tool

1. Start the program.
2. Use the commands `.px` or `.rem` to select the desired conversion.
3. Enter the number you wish to convert, ensuring you use the correct suffixes according to the active converter **(suffixes are optional)**.
4. Paste the result where you need it; the program automatically saves the result to the clipboard.

If you need help, use the command `.help` to see all available commands.

## Notices

- Soon, .rpm and .deb packages will be added.