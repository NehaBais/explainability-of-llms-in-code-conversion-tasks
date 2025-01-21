if (mkdir(dir_path, mode) != 0) {
  if (errno == EEXIST) {
    printf("Directory already exists.\n");
  } else {
            fprintf(stderr, "An error occurred: %s\n", strerror(errno)));
  }
} else {
  printf("Successfully created the directory.\n");
}

return 0;
}