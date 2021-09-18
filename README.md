# cli_colors
A "light-weight" library for accessible terminal colors in cpp.

This is mainly taken from this [Stack Overflow answer](https://stackoverflow.com/a/33206814)

# Usage
The library provides two functions `color_print` and `color_str` and a handful of named colors and modifiers under the namespace "clic".

To use **cli_colors**, pass the text to be printed, the color of the text, and a list of modifiers to either of the functions, the only difference is that `color_print` prints the modified text, while `color_str` returns it.
