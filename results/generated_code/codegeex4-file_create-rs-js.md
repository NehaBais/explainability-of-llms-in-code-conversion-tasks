Here is the JavaScript version of your Rust code:

```javascript
const fs = require('fs');
const path = require('path');

async function create(root, fileName="output.txt", dirName="docs") {
    const fPath = path.join(root, fileName);
    const dPath = path.join(root, dirName);

    try {
        await fs.promises.mkdir(dPath);
        await fs.promises.open(fPath, 'w');
        return;
    } catch (err) {
        throw err;
    }
}

async function main() {
    try {
        await create(process.cwd());
        await create("/");
    } catch (err) {
        console.error("Error: ", err.message);
        process.exit(1);
    }
}

main();
```

This JavaScript code uses Node.js file system (`fs`) and path handling (`path`) modules. It works similarly to the Rust version, creating a new empty "output.txt" file and a directory named "docs". The files are created twice: once in the current working directory (retrieved using `process.cwd()`) and once in the root of the filesystem. 

Please note that in JavaScript, there's no simple way to fail gracefully or handle errors in main function like in Rust. This is why an error handler function is not included here.

Also, the `await` keyword is used to wait for asynchronous operations (`fs.promises.mkdir()` and `fs.promises.open()`) to complete before proceeding. This ensures that the files are fully created before the program ends.
