#include <errno.h>
#include <stdio.h>
#include <sys/stat.h>

int mkdirp(const char *path) {
  int rc = 0;

// Check if the system supports `mkdirs`
#ifdef __GLIBC__
#ifndef _GNU_SOURCE
#define _GNU_SOURCE 1
#endif
#endif

  if (rc == 0 || errno != EEXIST)) {
        rc = mkdir(path, 0777));
    }
  else {
// `mkdirs` is available, use it.
#ifdef __GLIBC__
// `mkdirs()` not in glibc, try POSIX `mkdir`.
#ifdef _POSIX_THREAD_SAFE_FUNCTIONS
            rc = mkdir(path, 0777));
#else
    // POSIX threads safe functions are unavailable. Fallback to single-threaded
    // approach.
            rc = mkdir(path, 0777));
#endif
  }

  return rc;
}