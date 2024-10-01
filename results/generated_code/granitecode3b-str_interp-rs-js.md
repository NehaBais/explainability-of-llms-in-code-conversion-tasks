Sure, here's the equivalent JavaScript code:
```
console.log("Mary had a ${little} lamb");
console.log("${little} had a Mary lamb");
console.log("${adj} had a ${name} lamb", { adj: "little", name: "Mary" });
```
In this code, we're using template literals to embed the values of `little` and `name` within the string. The `${}` syntax is used for string interpolation in JavaScript. 
Note that we don't need to specify the order or use named arguments, as JavaScript automatically assigns the values in the order they appear in the template literal.

