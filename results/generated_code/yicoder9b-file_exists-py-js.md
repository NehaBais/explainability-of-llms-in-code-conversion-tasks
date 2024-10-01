In JavaScript, you can use the `fs` module to perform file operations:

Here is how you'd do it for a current working directory and filesystem root:

```javascript
const fs = require('fs');

// Check if input.txt exists in the current directory
console.log(fs.existsSync("input.txt")); 

// Check if /input.txt exists at the root of the filesystem
console.log(fs.existsSync("/input.txt"));

// Check if a 'docs' directory exists in the current directory
console.log(fs.existsSync("docs") && fs.lstatSync('docs').isDirectory()); 

// Check if a 'docs' directory exists at the root of the filesystem
console.log(fs.existsSync("/docs") && fs.lstatSync('/docs').isDirectory());  
```
Please note, for this JavaScript code to run you need to have NodeJS installed on your machine and the file execution environment needs to support it (e.g. a server side script or through `node filename.js` in command line). Also ensure appropriate permissions are set for the files/directories being checked.
