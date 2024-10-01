The equivalent code in JavaScript would be:

```javascript
const fs = require('fs');
const path = require('path');

const files = ['input.txt', 'docs', '/input.txt', '/docs'];

files.forEach(file => {
    fs.stat(file, (err, stats) => {
        if (!err && stats.isDirectory()) {
            console.log(`${file} is a directory`);
        } else if (!err && !stats.isDirectory()){
            console.log(`${file} is a file`);
        } else {
            console.log(`${file} does not exist`);
        }
    });
});
```

This code does the following:
1. Imports Node's `fs` and `path` modules, which provide functionality for interacting with the filesystem in Node.js.
2. Declares an array `files` containing the names of the files to check and their paths relative to the current working directory (./) and the filesystem root (/).
3. Uses `forEach()` to iterate over the `files` array, checking each file with `fs.stat()`. This function takes a callback that is executed for each element in the array.
4. The callback first checks if there was an error accessing the file (`err`) and if the stats are not a directory (`!stats.isDirectory()`). If neither of these conditions are true, it means the file exists and is not a directory, so it logs that to the console.

Note: Unlike Rust, JavaScript does not automatically prepend slashes to file paths on certain system calls, so you need to add them if your files or directories are located at the root of the filesystem.
