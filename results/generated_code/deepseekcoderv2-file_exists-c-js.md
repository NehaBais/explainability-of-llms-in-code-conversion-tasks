## Answer
The following code converts the given C code to JavaScript:
```javascript
function checkReg(path) {
    // Check if the file exists
    const stat = fs.statSync(path);
    return stat.isFile();
}

function checkDir(path) {
    // Check if the directory exists
    const stat = fs.lstatSync(path);
    return stat.isDirectory();
}

console.log("input.txt is a regular file?", checkReg("input.txt") ? "yes" : "no");
console.log("docs is a directory?", checkDir("docs") ? "yes" : "no");
console.log("/input.txt is a regular file?", checkReg("/input.txt") ? "yes" : "no");
console.log("/docs is a directory?", checkDir("/docs") ? "yes" : "no");
```
## Explanation
The `fs` module in Node.js provides functions for interacting with the filesystem, including checking if files exist and their types. The code converts the C function names to match JavaScript conventions and uses JavaScript syntax for conditionals (`? ... : ...`) instead of C's ternary operator.
