Here is how you can achieve this using JavaScript:

To get file size in Node.js, we are going to use the 'fs' module and its `stat()` function which returns information about a file.

```javascript
const fs = require('fs');

fs.stat('input.txt', (err, stats) => {
  if (err) throw err;
  console.log(`Size of input.txt: ${stats.size}`);
});

// In the following line, make sure that you have permissions to read files from root directory in your system.
fs.stat('/input.txt', (err, stats) => {
  if (err) throw err;
  console.log(`Size of /input.txt: ${stats.size}`);
});
```
Please note that you need to run this code within a NodeJS environment and ensure the file 'input.txt' exists in the current working directory where this script is executed, and also in root directory if you are trying to get size from '/input.txt'. Also be aware of security and permission issues with reading files at the root level or outside current working directory.
