Sure, here is the equivalent JavaScript code for your C program.
```javascript
let str = "Good Morning";
str += " to all" + "!!!";
console.log(str);
```
This code does exactly the same thing as your C code: it creates a string variable and appends another string literal to it, then logs out the new contents of the variable. Note that JavaScript doesn't have the need for dynamic memory allocation like C to handle the growth of the string dynamically so it's safe to use this method even when you don't have sufficient space allocated to str.
