In JavaScript, string interpolation is done using template literals. Here is how to convert the given Rust code into JavaScript:
```javascript
console.log(`Mary had a ${"little"} lamb`);
// You can specify order
console.log(`${"Mary"} had a ${"little"} lamb`);
// Or named arguments if you prefer
console.log(`${name} had a ${adj} lamb`.replace("adj", "little").replace("name", "Mary"));
```
Note that JavaScript does not support string interpolation with named arguments out of the box. You have to use `.replace()` method as shown in the third example above.
