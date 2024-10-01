JavaScript does not have a built-in filesystem module like C++, instead it uses the fs (file system) module in Node.js environment. Here is how you can achieve this:

```javascript
const fs = require('fs');

function printFileSize(filename){
    try { 
        let stats = fs.statSync(filename);
        console.log(`Size of file ${filename} is ${stats.size} bytes.`);
    } catch (ex) {
        console.error(ex.message);
    }
}
printFileSize('input.txt');
printFileSize('/input.txt');
```
Please note this code assumes that you are running it in a Node.js environment and it has permissions to access the files specified. It will also only work if the current working directory contains an 'input.txt' file and the root of the filesystem has a file named '/input.txt' as well.
