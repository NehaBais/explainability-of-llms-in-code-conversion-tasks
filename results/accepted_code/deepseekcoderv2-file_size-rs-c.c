#include "argp.h"
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>

// Define the structure for command line arguments.
struct arguments {
  char *file_name;
};

// Define an error handling function to print the error message and exit with a
// given code.
void handle_error(char *msg, int err) {
  perror(msg);
  exit(err);
}

// Callback function for argp which parses command line arguments passed to the
// program.
int parse_opt(int key, char *arg, struct argp_state *state) {
  struct arguments *arguments = state->input;

  switch (key) {
  case ARGP_KEY_ARG: // Argument key for an argument that does not have a short
                     // option.
    if (state->argh != NULL)
      /* Too many arguments. */
      argp_usage(state);
    break;
  default: // This should never happen.
    return ARGP_ERR_UNKNOWN;
  }
  return 0;
}

// Callback function for argp which displays the usage and help message.
void print_help(struct argp_option *options, char *doc) {
  struct argp_state state = {};

  printf("%s [OPTION]... FILE...\n\n%s", doc, options[0].description);
  for (int i = 1; options[i].key != -1; ++i) {
    printf(options[i].synopsis, options[i].name_tag ? options[i].name : "");
  }
}

// Define the argp structure.
const struct argp argp = {
    .options = {}, .parser = parse_opt, .doc = "Verify file size."};

int main(int argc, char **argv) {
  // Allocate and initialize the arguments structure.
  struct arguments args = {};

  // Parse command line arguments using argp.
  argp_parse(&argp, argc, argv, 0, NULL, &args);

  // Get file metadata (size in this case).
  struct stat st;
  int fd;

  if ((fd = open(args.file_name, O_RDONLY)) == -1) {
    handle_error("Could not open file", 2);
  }

  // Check the status of the opened descriptor (the call to lstat() instead of
  // stat() ensures that a symlink is followed).
  if (lstat(args.file_name, &st) == -1) {
    handle_error("Could not get file metadata", 2);
  } else {
    printf("Size of %s: %ld bytes\n", args.file_name, st.st_size);
  }
}