Here is the JavaScript equivalent of your Rust code. The replacement for the string interpolation in JavaScript uses template literal strings (backticks ` `). In these, you can include variable values inside `${}` brackets. 

Rust Code to JavaScript Conversion:
```javascript
console.log("Mary had a %s lamb", "little");
// You can specify order
console.log("%s had a %s lamb", "Mary", "little");
// Or named arguments if you prefer
console.log("${name} had a ${adj} lamb", { adj: "little", name: "Mary" });
```

Note that in the last two examples, JavaScript uses different syntax for variables and string formatting compared to Rust, so they are handled slightly differently. For the named arguments (`${name} had a ${adj} lamb`), it's not possible to include this directly using JavaScript. But you can use them in console log like: 

let adj = "little";
let name="Mary";
console.log(`${name} had a ${adj} lamb`);

