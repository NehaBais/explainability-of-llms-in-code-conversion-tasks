 The JavaScript equivalent of the C++ code would be:

```JavaScript
const fs = require('fs');
const path = require('path');

function fileExists(filePath) {
    console.log(filePath);
    if (fs.existsSync(filePath)) {
        if (fs.lstatSync(filePath).isDirectory()) {
            console.log(" is a directory");
        } else {
            console.log(" exists with a file size of " + fs.readFileSync(filePath).length + " bytes.");
        }
    } else {
        console.log(" does not exist");
    }
}

fileExists('input.txt');
fileExists('zero_length.txt');
fileExists(path.join('docs', 'input.txt'));
fileExists(path.join('docs', 'zero_length.txt'));
```
Note that `fs.existsSync()` and `fs.lstatSync().isDirectory()` methods are used to check if a path exists, and whether it's a directory respectively. The JavaScript equivalent of the C++ `std::filesystem::file_size()` is not supported in Node.js, so we use `fs.readFileSync(filePath).length` instead. 

Also, please note that for file size checking, the file should be present and it must be a regular file or it will throw an error.
