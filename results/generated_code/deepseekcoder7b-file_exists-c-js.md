The JavaScript equivalent of the provided C code would look like this using Node.js with its built-in `fs` and `path` modules, as there is no direct way to do it in pure JS due to security restrictions on file system accessibility. 

Please note that since Node.js runs your script with different permissions than a standalone C program (because of how they are started), you may need additional steps for this code snippet to work correctly.

```javascript
const fs = require('fs');
const path = require('path');
 
function check_reg(filePath) {
    try {
        return fs.statSync(filePath).isFile();
    } catch (err) {
        return false;
    }
}
  
function check_dir(directoryPath){
    try {
        return fs.statSync(directoryPath).isDirectory();
    } catch (err) {
        return false;
    }
} 

console.log("input.txt is a regular file? " + (check_reg('./input.txt') ? 'yes' : 'no'));
console.log("docs is a directory? " + (check_dir('./docs') ? 'yes' : 'no'));
// If you want to check files and directories in the filesystem root, 
// just prepend './' with an absolute path of your system i.e., '/input.txt', '/docs'. 
console.log("/input.txt is a regular file? " + (check_reg('/input.txt') ? 'yes' : 'no'));
console.log("/docs is a directory? " + (check_dir('/docs') ? 'yes' : 'no'));
```
Remember to replace `'./input.txt'` and `'./docs'` with the actual paths of your files in your system. 

This script will check if the file "./input.txt" is a regular file (i.e., not a directory), and if the directory "./docs" exists, relative to the current working directory. It also checks for a regular file "/input.txt" at the filesystem root level and a directory "/docs".

