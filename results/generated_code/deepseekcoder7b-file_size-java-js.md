Here is the JavaScript equivalent of your Java code:

Please note, Node.js does not have a native way to handle files system like in java so we use 'fs' module for reading file stats. 

```javascript
const fs = require('fs');

function getFileSize(filename) {
    const stats = fs.statSync(filename);
    return stats.size;
}

console.log((getFileSize("file.txt")).toLocaleString() + " B");  // Replace file.txt with your filename
console.log((getFileSize("/file.txt")).toLocaleString() + " B");// Replace /file.txt with the full path of your file
```
Make sure to run this script in a Node.js environment, and that you have access to read files from the specified paths, otherwise it might result in an error.

