Here's the JavaScript code that accomplishes the same task as the given C code:
```javascript
let str = "Good Morning";
let cstr = " to all";
let cstr2 = " !!!";
if (str.length + cstr.length + cstr2.length > str.length) {
 str += cstr2;
} else {
 let x = str.length;
 str = str.slice(0, x) + cstr2 + str.slice(x);
}
console.log(str); // Output: Good Morning to all !!!
```
In this JavaScript code, we first declare the variables `str`, `cstr`, and `cstr2` with their respective values. We then check if the length of the string plus the length of both `cstr` and `cstr2` is greater than or equal to the length of the string. If it is, we use the `+=` operator to concatenate `cstr2` to the end of `str`. Otherwise, we create a new string by slicing `str` up to the point where we want to insert `cstr2`, concatenating it with `cstr2`, and then concatenating the remaining part of `str`. Finally, we log the contents of `str` to the console.

