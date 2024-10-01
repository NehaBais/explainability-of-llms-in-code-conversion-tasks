Sure, here's the JavaScript code that achieves the same task:
```javascript
const fs = require('fs');
// Rename in current working directory
fs.renameSync('input.txt', 'output.txt');
fs.renameSync('docs', 'mydocs');
// Rename in root directory
fs.renameSync('/input.txt', '/output.txt');
fs.renameSync('/docs', '/mydocs');
```
This code uses the `fs` module in Node.js to rename files and directories. The `renameSync()` method is used to perform the renaming operation synchronously, meaning that it will wait for the operation to complete before proceeding to the next line of code. The first two lines of code rename the "input.txt" file to "output.txt" and the "docs" directory to "mydocs". The last two lines do the same but with root directory paths.

