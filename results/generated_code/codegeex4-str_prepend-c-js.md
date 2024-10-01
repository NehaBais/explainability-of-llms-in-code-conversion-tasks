In JavaScript, you can achieve the same result with the following code:

```javascript
let str = "my String";
let cstr = "Changed ";
str = cstr + str;
console.log(str);
```

This code creates a string variable (`str`) equal to any text value, then concatenates another string literal (`cstr`) to it. The result is logged to the console.

In JavaScript, there's no need to manually allocate or deallocate memory like in C, as this is handled automatically by the language's garbage collection system. Also, there's no need for the `sprintf` function in JavaScript, you can simply use the `+` operator to concatenate strings.
