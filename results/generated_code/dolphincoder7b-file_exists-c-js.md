This code has been successfully converted to JavaScript. However, due to the different file system and environment in Node.js compared to C, I am unable to test this in a local environment. 

Here is the equivalent JavaScript code:

```javascript
const { stat } = require("fs");

/** Check for regular file. */
function checkReg(path) {
    return stat(path).then((stats) => stats.isFile());
}

/** Check for directory. */
function checkDir(path) {
    return stat(path).then((stats) => stats.isDirectory());
}

async function main() {
    console.log(`input.txt is a regular file? ${await checkReg("input.txt") ? "yes" : "no"}`);
    console.log(`docs is a directory? ${await checkDir("docs") ? "yes" : "no"}`);
    console.log(`/input.txt is a regular file? ${await checkReg("/input.txt") ? "yes" : "no"}`);
    console.log(`/docs is a directory? ${await checkDir("/docs") ? "yes" : "no"}`);
}

main();
```

Please note that the `stat` function in Node.js returns a Promise, so you need to use an async/await structure to handle file I/O operations.
