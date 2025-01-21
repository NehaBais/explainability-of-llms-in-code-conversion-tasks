#include <Python.h>
#include <stdio.h>
#include <string.h>

int startsWith(char *str1, char *str2) {
  int len1 = strlen(str1);
  int len2 = strlen(str2);

  if (len2 > len1)
    return 0;

  for (int i = 0; i < len2; ++i) {
    if (str1[i] != str2[i])
      return 0;
  }

  return 1;
}

int endsWith(char *str1, char *str2) {
  int len1 = strlen(str1);
  int len2 = strlen(str2);

  if (len2 > len1)
    return 0;

  for (int i = 0; i < len2; ++i) {
    if (str1[len1 - i - 1] != str2[i])
      return 0;
  }

  return 1;
}

int in(char *str1, char *str2) {
  int len1 = strlen(str1);
  int len2 = strlen(str2);

  for (int i = 0; i < len1 - len2 + 1; ++i) {
    if (strcmp(&str1[i], str2) == 0)
      return 1;
  }

  return 0;
}

int find(char *str1, char *str2, int start) {
  int len1 = strlen(str1);
  int len2 = strlen(str2);

  if (start >= len1 - len2 + 1 || start < 0)
    return -1;

  for (int i = start; i < len1 - len2 + 1; ++i) {
    if (strcmp(&str1[i], str2) == 0)
      return i;
  }

  return -1;
}

int main() {
  char *str1 = "abcd";
  char *str2 = "ab";

  printf("startsWith: %d\n", startsWith(str1, str2));
  printf("endsWith: %d\n", endsWith(str1, str2));
  printf("in: %d\n", in(str1, str2));

  int loc = find(str1, str2);
  if (loc != -1)
    printf("find: %d\n", loc);

  loc = find(str1, str2, loc + 1);
  if (loc != -1)
    printf("find: %d\n", loc);

  Py_Initialize();
  PyObject *pModule = PyImport_ImportModule("__main__");
  if (!pModule) {
    fprintf(stderr, "Failed to import module __main__\n");
    return 1;
  }

  PyObject *pFunction = PyObject_GetAttrString(pModule, "startsWith");
  if (pFunction == NULL) {
    fprintf(stderr, "Could not find function startsWith\n");
    Py_DECREF(pModule);
    return 1;
  }

  PyObject *args[] = {PyUnicode_FromString(str1), PyUnicode_FromString(str2)};
  PyObject *result = PyObject_CallObject(pFunction, args);
  if (result == NULL) {
    fprintf(stderr, "Could not call function startsWith\n");
    Py_DECREF(pModule);
    return 1;
  }

  int startWithResult = PyLong_AsLong(result);
  printf("startsWith: %d\n", startWithResult);

  PyObject *pFunction2 = PyObject_GetAttrString(pModule, "endsWith");
  if (pFunction2 == NULL) {
    fprintf(stderr, "Could not find function endsWith\n");
    Py_DECREF(pModule);
    return 1;
  }

  PyObject *args2[] = {PyUnicode_FromString(str1), PyUnicode_FromString(str2)};
  PyObject *result2 = PyObject_CallObject(pFunction2, args2);
  if (result2 == NULL) {
    fprintf(stderr, "Could not call function endsWith\n");
    Py_DECREF(pModule);
    return 1;
  }

  intendsWithResult = PyLong_AsLong(result2);
  printf("endsWith: %d\n", endsWithResult);

  PyObject *pFunction3 = PyObject_GetAttrString(pModule, "in");
  if (pFunction3 == NULL) {
    fprintf(stderr, "Could not find function in\n");
    Py_DECREF(pModule);
    return 1;
  }

  PyObject *args3[] = {PyUnicode_FromString(str1), PyUnicode_FromString(str2)};
  PyObject *result3 = PyObject_CallObject(pFunction3, args3);
  if (result3 == NULL) {
    fprintf(stderr, "Could not call function in\n");
    Py_DECREF(pModule);
    return 1;
  }

  int inResult = PyLong_AsLong(result3);
  printf("in: %d\n", inResult);

  PyObject *pFunction4 = PyObject_GetAttrString(pModule, "find");
  if (pFunction4 == NULL) {
    fprintf(stderr, "Could not find function find\n");
    Py_DECREF(pModule);
    return 1;
  }

  PyObject *args4[] = {PyUnicode_FromString(str1), PyUnicode_FromString(str2)};
  PyObject *result4 = PyObject_CallObject(pFunction4, args4);
  if (result4 == NULL) {
    fprintf(stderr, "Could not call function find\n");
    Py_DECREF(pModule);
    return 1;
  }

  int findResult = PyLong_AsLong(result4);
  printf("find: %d\n", findResult);

  Py_DECREF(result4);
  Py_DECREF(result3);
  Py_DECREF(result2);
  Py_DECREF(result);
  Py_DECREF(pFunction3);
  Py_DECREF(pFunction2);
  Py_DECREF(pFunction);
  Py_DECREF(pModule);
  Py_Finalize();
  return 0;
}