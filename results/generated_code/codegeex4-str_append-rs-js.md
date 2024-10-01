In JavaScript, you can achieve the same result with the following code:

```javascript
let hello = "Hello World";
hello += "!!!!!";

console.log(hello);

// Or

let hello = "Hello World";
hello.concat("!!!!!");

console.log(hello);
```

Both of these methods will append "!!!!!" to the string variable `hello` and then print out the contents. 

In JavaScript, there are a few ways to concatenate or add strings together:

1. Using the `+` operator (as shown in the first example above)

2. Using the `concat()` method (as shown in the second example above)
