The error message indicates that there is an issue with the formatting of the string in the `print()` function. The `.format()` method expects a specific number of arguments to be passed, but more are being provided. In this case, the number of arguments provided is one more than the number of placeholders in the format string.

To fix the error, you can either reduce the number of arguments passed to `.format()`, or add more placeholders to the format string.
Alternatively, you can use the `+` operator to concatenate the arguments instead of using `.format()`.
Both of these fixes will resolve the syntax error and allow the code to run successfully.
