This code can be converted to JavaScript as follows:
```
const str = "Mary had a %s lamb";
const txt = "little";
const out = sprintf(str, txt);
console.log(out);

function sprintf(fmt, ...args) {
    return fmt.replace(/%s/g, () => args[0]);
}
```
Explanation:

1. The `str` variable contains the original string with a placeholder for a value (%s).
2. The `txt` variable contains the value to be inserted into the placeholder.
3. The `out` variable is used to store the result of the interpolation.
4. The `sprintf` function takes two arguments: `fmt` and `...args`. `fmt` is the original string with placeholders, and `args` is an array containing the values to be inserted into the placeholders.
5. The function first replaces all occurrences of `%s` in `fmt` with a callback function that takes no arguments and returns the value at index 0 of the `args` array (which contains the value for the placeholder).
6. Finally, it returns the resulting string.
7. The `console.log` statement is used to print the result to the console.
