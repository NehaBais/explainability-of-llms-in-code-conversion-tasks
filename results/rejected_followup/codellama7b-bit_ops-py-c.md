Error: The compiler is unable to find the function `rotl` with the specified arguments, as it has been declared as void and thus cannot return any value.
Fix: Replace all instances of `return rotl(width, a, -n);` with `rotl(width, a, -n);`, as the function does not need to return anything as it is declared void.
