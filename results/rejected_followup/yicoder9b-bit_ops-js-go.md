The error occurred because we imported "math" package but didn't use it anywhere in our program. This creates an unused import which leads to a compile-time error.

To fix this, remove the unused import by removing the line `import ("math")`. Now that line is not needed at all as we are not using any function from "math" package in our code.
