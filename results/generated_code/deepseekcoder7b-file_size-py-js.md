JavaScript doesn't have a built-in function for getting the size of a file, but you can achieve this using Node.js with `fs` module, which is similar to Python's standard library. Here's how you would write it in JavaScript:

```javascript
const fs = require('fs');
const path = require('path');

function checkSize(filePath) {
    fs.stat(filePath, (err, stats) => {
        if (err) {
            console.log(`Error occurred while accessing the file: ${err}`);
            return;
        }
        console.log(`File size in bytes: ${stats.size}`);
    });
}

// Assuming input.txt is in the current working directory
let currentDirPath = path.resolve('input.txt');  // Node.js will automatically look for file in current dir, same as Python's 'os.path.getsize('input.txt')'.
checkSize(currentDirPath);

// Assuming input.txt is at the root of the file system ('/'), you have to provide full path here. 
let fsRootPath = path.resolve('/input.txt');   // You need to provide absolute path, same as Python's 'os.path.getsize('/input.txt')'.
checkSize(fsRootPath);
```

This code will print the size of `input.txt` in bytes if it exists and can be accessed by Node.js. If it doesn't exist or cannot be accessed for any reason, an error message is printed to the console. The function `checkSize()` wraps around the functionality you want (getting file stats), which makes your code cleaner and easier to understand.

