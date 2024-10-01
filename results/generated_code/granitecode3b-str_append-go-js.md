Sure, here's the equivalent JavaScript code:
```
const { StringBuilder } = require('strings');
const s = new StringBuilder();
s.append('foo');
s.append('bar');
console.log(s.toString());
``` 
This code uses a similar approach to achieve the same result as the Golang code, but with different syntax. The `StringBuilder` class is imported from the `strings` package in Node.js, and an instance of it is created using the `new` keyword. The `append` method is then used to add the string literals `'foo'` and `'bar'` to the builder object. Finally, the contents of the builder are printed out using `toString`.

