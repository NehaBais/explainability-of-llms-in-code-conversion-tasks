```javascript
const fs = require('fs');

let sizeCurrentDir;
try {
    sizeCurrentDir = fs.statSync('./input.txt').size;
} catch (err) {
    console.error(`Error getting file size of input.txt in current directory: ${err}`);
}

let sizeFileSystemRoot;
try {
    sizeFileSystemRoot = fs.statSync('/input.txt').size;
} catch (err) {
    console.error(`Error getting file size of input.txt in file system root: ${err}`);
}
```
