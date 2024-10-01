Here is the JavaScript code that performs the same task as the original C program:

```javascript
let str = "my String";
const cstr = 'Changed ';
let dup = null;

str = cstr + str;
dup = str.slice();
console.log(str);
```

Please note that JavaScript does not have a function called `sprintf` and the code will fail to compile if run on a browser or server without Node.js support. 

Also, `strdup()` is not directly supported in JavaScript. However, JavaScript has its own String object which can be used for string manipulation operations. The `slice()` method creates a shallow copy of a part of the original string and returns it as a new string. This allows you to make changes without modifying the original string variable.

Remember that JavaScript does not have support for the C standard library, so using any functions that use these is not possible.
