Sure! Here's the converted code in JavaScript:
```javascript
const fs = require('fs');

// Create empty file in current working directory
try {
  fs.writeFileSync('output.txt', '');
} catch (error) {
  console.log(error);
}

// Create empty file in filesystem root
try {
  fs.writeFileSync('/output.txt', '');
} catch (error) {
  console.log(error);
}

// Create empty directory in current working directory
try {
  fs.mkdirSync('docs');
} catch (error) {
  console.log(error);
}

// Create empty directory in filesystem root
try {
  fs.mkdirSync('/docs');
} catch (error) {
  console.log(error);
}
```
Note that the `fs` module is used for file system operations in Node.js, and the `writeFileSync()` method is used to create a new empty file. The `mkdirSync()` method is used to create a new directory. The `/` at the beginning of the path indicates the root directory.
Also, note that the `try-catch` block is used to handle any errors that may occur during the execution of the code.
