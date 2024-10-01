Here is the equivalent JavaScript code for your Rust function:

```JavaScript
function main() {
    let str = "Mary had a %s lamb";
    console.log(str.replace('%s', 'little'));
  
    // You can specify order
    str = "%2$s had a %1$s lamb";
    console.log(str.replace('%2$s', 'Mary').replace('%1$s', 'little'));
  
    // Or named arguments if you prefer 
    let name = "Mary";
    let adj = "little";
    console.log(`${name} had a ${adj} lamb`);
}
```
Note: JavaScript does not support string interpolation as directly as Rust in the way specified by your example, so some workarounds were necessary (like ordering arguments with `%n$s`). For more complex cases involving named variables, you might have to use a different approach or library.
