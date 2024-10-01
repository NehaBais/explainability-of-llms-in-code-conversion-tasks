The given Rust code creates an empty file and directory. Let's convert it to JavaScript using Node.js built-in `fs` module:

```javascript
const fs = require('fs');
const path = require('path');

const FILE_NAME = "output.txt";
const DIR_NAME = "docs";

main();

function main() {
    create(".").then(() => create("/")).catch(errorHandler);
}

function create(root) {
    let fPath = path.join(root, FILE_NAME);
    let dPath = path.join(root, DIR_NAME);
    
    return Promise.all([
        fs.promises.mkdir(dPath), 
        fs.promises.writeFile(fPath, "")
    ]);
}

function errorHandler(error) {
    console.log("Error: " + error);
    process.exit(1);
}
```

This JavaScript code does the same as Rust version: it creates an empty file and directory in the given root path. If anything goes wrong during that process, it will be caught by the catch block and logged to console before exiting with status 1.
