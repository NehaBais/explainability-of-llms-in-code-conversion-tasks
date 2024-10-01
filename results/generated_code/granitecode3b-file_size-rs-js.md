Sure, here's the equivalent JavaScript code:
```
const fs = require('fs');
const path = require('path');

function exitErr(msg, code) {
  console.error(`Error: ${msg}`);
  process.exit(code);
}

try {
 const fileName = process.argv[2];
 const filePath = path.join(__dirname, fileName);
 const metadata = fs.statSync(filePath);
 console.log(`Size of ${fileName} is ${metadata.size} bytes`);
} catch (err) {
 exitErr(err.message, 1);
}
```
This code uses the `fs` module in Node.js to read the size of a file specified as a command-line argument. The `path` module is used to construct the full path to the file based on the current working directory and the supplied file name.
The code first checks if the required arguments have been supplied using `process.argv`, and then attempts to get the metadata for the file using `fs.statSync`. If the file doesn't exist or some other error occurs, an `exitErr` function is called with a descriptive error message and exit code. Otherwise, the size of the file is printed to the console.

