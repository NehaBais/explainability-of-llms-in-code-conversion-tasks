Sure, here's the equivalent JavaScript code for creating a directory and any missing parents:
```javascript
const fs = require('fs');
function createDirectory(path) {
 try {
  fs.mkdirSync(path, { recursive: true });
  console.log("Directory created successfully");
 } catch (err) {
  if (err.code === 'EEXIST') {
   console.log("Directory already exists");
  } else {
   throw err;
  }
 }
}
// Example usage:
createDirectory('C:/parent/test');
```
In this code, we use the `fs` module in Node.js to create a directory and any missing parents. We use the `mkdirSync()` method with the `{ recursive: true }` option to ensure that all intermediate directories are created as needed. If an error occurs while creating the directory, we catch it and check if it's because the directory already exists. If so, we log a message indicating that the directory already exists. Otherwise, we re-throw the error for further handling.

