 Sure, here is the equivalent JavaScript code using string interpolation:

```javascript
function main() {
    console.log("Mary had a %s lamb", "little");
    // You can specify order
    console.log("%s had a %s lamb", "Mary", "little");
    // Or named arguments if you prefer
    let adj = "little";
    let name = "Mary";
    console.log(`${name} had a ${adj} lamb`);
}

main();
```

In JavaScript, string interpolation is achieved using template literals (backticks `` ` ``). This allows for embedding expressions within strings, similar to how Rust uses format specifiers in C-style strings.
