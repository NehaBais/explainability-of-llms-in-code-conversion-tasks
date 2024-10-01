 In JavaScript, you can use template literals or string concatenation to accomplish this. Here's how the above Rust code would translate into JavaScript:

Using Template Literals:
```javascript
console.log(`Mary had a ${"little"} lamb`);
// Or if prefer named arguments
console.log(`${name} had a ${adj} lamb`, { name:"Mary", adj:"little" });
```

Using String Concatenation:

const str = "Mary had a ";
const value = "little";
console.log(str + value + " lamb");
// Or if prefer named arguments
console.log(`${name} had a ${adj} lamb`, { name:"Mary", adj:"little" });

In both of these JavaScript examples, we're achieving the string interpolation similar to how it's done in Rust using placeholders (i.e., `${}` or `+`) and then replacing those placeholders with values we pass along.
