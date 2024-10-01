This is how you can convert the given Golang code to JavaScript:
```javascript
const { sprintf } = require('sprintf-js');

const str  = "Mary had a %s lamb";
const txt  = "little";
let out  = sprintf(str, txt);
console.log(out);
```
In this example, `sprintf` is used from the `sprintf-js` library for JavaScript to perform string interpolation similar to Golang. The `main` function in Golang has been converted to a simple script that defines two variables and performs a string interpolation using `sprintf`. The result of the interpolation is then printed out.
