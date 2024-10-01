 Here's the JavaScript version of your C++ code:

```javascript
function print_logic(a, b) {
    console.log("a and b is " + (a && b));
    console.log("a or b is " + (a || b));
    console.log("not a is " + (!a));
}
```
Please note that JavaScript does not have a built-in function for boolean output like `std::boolalpha` in C++. So, in this code `(a && b)` will return a boolean value (`true` or `false`) instead of `"true"` or `"false"`.
