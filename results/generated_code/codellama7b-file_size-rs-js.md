Sure! Here's the converted JavaScript code:
```javascript
const fs = require('fs');
const path = require('path');

function main() {
  const filePath = process.argv[2];
  if (!filePath) {
    console.error("No file name supplied");
    process.exit(1);
  }
  let metadata;
  try {
    metadata = fs.statSync(filePath);
  } catch (e) {
    console.error(`Error: ${e}`);
    process.exit(2);
  }
  console.log(`Size of file.txt is ${metadata.size} bytes`);
}

function exit_err(msg, code) {
  console.error(`Error: ${msg}`);
  process.exit(code);
}
```
In this code, we use the `fs` and `path` modules to interact with the file system and retrieve metadata about a file. We then print the size of the file to the console. If there is an error while retrieving the metadata, we exit with an error message.

Note that in JavaScript, we don't have a built-in way to write to `stderr` like we do in Rust. Instead, we use the `console.error()` method to print to the console. Also, note that the `process.exit()` method is used to exit the program with an error code.
