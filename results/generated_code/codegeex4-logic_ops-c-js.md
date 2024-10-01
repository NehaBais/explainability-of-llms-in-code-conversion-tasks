Here's how you can convert the given C code to JavaScript:

```JavaScript
function print_logic(a, b)
{
  console.log("a and b is " + (a && b));
  console.log("a or b is " + (a || b));
  console.log("not a is " + !a);
}
```

In this JavaScript version of the code, the logical AND (`&&`), logical OR (`||`) and negation (`!`) operators work in the same way as they do in C. The `console.log` function is used to output the results to the console.

Please note that JavaScript uses `true` and `false` for boolean values instead of 1 and 0, so when you use logical operations with non-boolean types, JavaScript will implicitly convert them to boolean values.
