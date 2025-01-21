#include <stdio.h>
#include <string.h>

void print_interpolated(const char *format, ...) {
  va_list args;
  va_start(args, format);

  while (*format) {
    if (*format == '{') {
      format++;
      const char *placeholder = format;
      int i = 0;
      while (*format != '}' && *format != '\0') {
        format++;
        i++;
      }
      if (*format == '}') {
        char arg_name[10];
        strncpy(arg_name, placeholder, i);
        arg_name[i] = '\0';
        const char *value = va_arg(args, const char *);
        printf("%s", value);
        format++; // Move past the closing '}'
      } else {
        // If no closing '}', just print the rest of the string as is
        printf("{");
        while (*format != '\0') {
          putchar(*format++);
        }
      }
    } else {
      putchar(*format++);
    }
  }

  va_end(args);
}

int main() {
  print_interpolated("Mary had a %s lamb", "little");
  // You can specify order
  print_interpolated("%s had a %s lamb", "Mary", "little");
  // Or named arguments if you prefer
  char *name = "Mary";
  char *adj = "little";
  print_interpolated("%s had a %s lamb", name, adj);

  return 0;
}