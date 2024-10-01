The equivalent code in JavaScript would be:

```javascript
function main() {
    console.log(`Mary had a ${name} lamb`, "Mary");
    // You can specify order
    console.log(`${name} had a ${adj}`, name="Mary", adj="little");
    // Or named arguments if you prefer
    console.log(`{name} had a ${adj} lamb`, name="Mary", adj="big");
}
```
Please note that JavaScript does not support interpolation in the same way as Rust. Instead, it uses template literals (`${}`) to embed expressions into strings directly. Therefore, you cannot replace "X" with a variable value like in Rust; instead, it must be replaced by a string literal.
