
Here's the converted code in JavaScript:
```
const str = "Good Morning";
const cstr = " to all";
const cstr2 = " !!!";
let x = 0;

if (str.length > str.length + cstr.length + cstr2.length) {
    // 1st method
    str += cstr;

    // 2nd method
    x = str.length;
    str = `${str.substring(0, x)}${cstr2}`;

    console.log(str);
}
```
Note that in JavaScript, strings are immutable by default, so we need to use the `+=` operator or the `concat` method to concatenate two strings. Also, since strings are not fixed-length data structures in JavaScript, we don't need to check the size of the string buffer before appending to it like we do in C/C++.
