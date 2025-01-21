Error: The `compare` function is defined to take two arguments of type `const string &`, but the function call in line 31 and 32 passes an integer and a double value, which cannot be converted to a `string` object.

Fix: Change the type of the function's arguments to `int` or `double`, respectively, so that they match the types of the values being passed as arguments.
