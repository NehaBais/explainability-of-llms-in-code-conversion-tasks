 In JavaScript, you can use the `concat()` method to append a string literal to another string. Here is equivalent code in JavaScript:

```javascript
var str = "my String";
var cstr = "Changed ";
var dup = null; 
dup = str + ""; // convert array into string
str = cstr.concat(dup);
console.log(str);
```
In this JavaScript code, I have created a variable `cstr` and set it to `"Changed "`. Then we concatenate this string with the original string stored in `str` by using the `concat()` method. Finally, we print out the resultant string.
