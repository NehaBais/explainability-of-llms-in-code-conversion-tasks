```javascript
let str = "Good Morning";
let cstr = " to all";
let cstr2 = " !!!";

// The JavaScript string is immutable, hence we need to create a new string with the appended value.
str += cstr;
str += cstr2;

console.log(str);
```
Please note that in JavaScript, strings are immutable. This means they cannot be changed once they have been created. So when you want to add another string to an existing one, you can't just append it like in C. Instead, you create a new string with the appended value.
