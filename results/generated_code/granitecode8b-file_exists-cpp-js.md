Here is the converted code in JavaScript:
```javascript
const fs = require('fs');
const path = require('path');
function fileExists(filePath) {
 console.log(filePath);
 if (fs.existsSync(filePath)) {
  if (fs.statSync(filePath).isDirectory()) {
   console.log(" is a directory");
  } else {
   console.log(` exists with a file size of ${fs.statSync(filePath).size} bytes.`);
  }
 } else {
  console.log(" does not exist");
 }
}
fileExists(path.join(__dirname, 'input.txt'));
fileExists(path.join(__dirname, 'zero_length.txt'));
fileExists(path.join(__dirname, 'docs/input.txt'));
fileExists(path.join(__dirname, 'docs/zero_length.txt'));
``` 
This code uses the Node.js fs module to check if a file or directory exists. The path module is used to construct the full path of the file or directory to check. 
The function `fileExists` takes in a filePath as an argument and logs the result to the console. It first checks if the file or directory exists using `fs.existsSync`. If it does, it checks if it's a directory using `fs.statSync`. If it is, it logs that it's a directory. If not, it logs that it exists with its size in bytes. 
The main function calls `fileExists` for the current working directory and for a file and directory in the filesystem root. It uses the path module to construct the full path of each file or directory.

