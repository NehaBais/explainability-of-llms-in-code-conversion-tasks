This is how you can convert the Python code to JavaScript. This is mostly direct conversion, but there are a couple of differences due to Python's type system and JavaScript's lack of string concatenation.

```javascript
var str = "12345678";  // String variable in JS
str += "9!";         // Append the string with another literal
console.log(str);    // Output the contents after the append operation
```

Please note that JavaScript doesn't have a direct equivalent of Python's str+= operator, so you need to use concatenation `+` instead. Also, JavaScript doesn't have a built-in print function like Python does. You typically use `console.log()` or `alert()` for this purpose.

Lastly, you can also create string variables in JavaScript without the `var` keyword as it's not necessary there.
