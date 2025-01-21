You can achieve this in JavaScript using Node.js with the fs (file-system) module. Here is how you do it:

```javascript
const fs = require('fs');

let size1;
try {
  size1 = fs.statSync('input.txt').size; // For a file in the current working directory
} catch (err) {
  console.error(err);
}

let size2;
try {
  size2 = fs.statSync('/input.txt').size; // For a file in the file system root
} catch (err) {
  console.error(err);
}
```
In this code, `fs.statSync` is used to get information about the file. The `.size` property of the object returned by `fs.statSync` gives the size of the file in bytes. You need to use a try-catch block because if the file does not exist or you don't have permission to read it, an error will be thrown.

Please note that you may need elevated privileges to read files from the root directory on some systems. In such cases, you might want to run your script as an administrator (on Windows) or use `sudo` (on Linux/Mac).
