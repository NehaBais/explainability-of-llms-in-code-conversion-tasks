The equivalent JavaScript code for the given C code would be:

```javascript
function print_logic(bool1, bool2) {
    console.log('a and b is ' + (bool1 && bool2));
    console.log('a or b is ' + (bool1 || bool2));
    console.log('not a is ' + !bool1);
}
```
In JavaScript, logical operators like "&&" and "||" work the same way as in C code. The main difference is that JavaScript uses "false" for boolean false and any non-zero integer value to represent true.
