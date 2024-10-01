This is a simplified version of the Rust code, as there is no corresponding JavaScript equivalent for `std` and the `process` module in JavaScript. Here's how we can convert this code to JavaScript:

```javascript
const fs = require('fs');
const path = require('path');

if (process.argv.length < 3) {
  console.error(`Error: No file name supplied`);
  process.exit(1);
}

const fileName = process.argv[2];
const metadata = fs.statSync(fileName);

console.log(`Size of ${fileName} is ${metadata.size} bytes`);
```

Note that the exact equivalent code for `std::io` and `process` modules in JavaScript are usually handled through Node.js specific modules like `fs` and `process`. 

For a more comprehensive solution, you'll need to refactor this code or use a Rust to JavaScript transpiler to fully cover all Rust features to make it work with JavaScript without any modifications.
