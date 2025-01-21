The error `undefined: strings` is caused because Go's standard library doesn't have a string type like C's `strncmp()` function, it requires `strings` package which contains a lot of string-related functions. 

Here are the solutions for your query -

1) To fix this error, you need to include the "strings" package in your code:
2) Then rewrite `startsWith` function as follows to use built-in functions:
3) Then rewrite `endsWith` function as follows:
4) Finally rewrite `doesContain` function as follows:
5) Now you can compile the code with no errors and it should give expected output.
