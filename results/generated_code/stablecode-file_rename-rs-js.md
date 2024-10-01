Here is the equivalent JavaScript code for your given Rust code:

This JavaScript code will do the same thing that your provided Rust code does. This includes renaming 'input.txt' to 'output.txt' and also renaming a directory 'docs' to 'mydocs'.

```javascript
const fs = require('fs');
const path = require('path');

let errMsg = "File move error";

// Rename input.txt to output.txt
try {
    fs.renameSync(
        path.resolve("input.txt")),
        path.resolve("output.txt")));
} catch (err) {
    console.error(`${errMsg} - ${err.message}}`));
}


// Rename docs directory to mydocs directory
try {
    fs.renameSync(
        path.resolve("docs")),
        path.resolve("mydocs")));
} catch (err) {
    console.error(`${errMsg} - ${err.message}}`));
}


// Rename input.txt in the filesystem root to output.txt and also rename docs directory in the filesystem root to mydocs directory
try {
    fs.renameSync(
        path.resolve("/input.txt")),
        path.resolve("/output.txt")));
} catch (err) {
    console.error(`${errMsg} - ${err.message}}`));
}


try {
    fs.renameSync(
        path.resolve("/docs")),
        path.resolve("/mydocs")));
} catch (err) {
    console.error(`${errMsg} - ${err.message}}`));
}
```
Please note that you need to execute this JavaScript code in an environment where Node.js is installed, as the fs module used here is specific to Node.js.
