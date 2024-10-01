The JavaScript version of the given C code is as follows:
```
const fs = require('fs');

function main() {
    let stats = fs.statSync('./input.txt');
    console.log(stats.size);
    stats = fs.statSync('/input.txt');
    console.log(stats.size);
}

main();
```
The JavaScript version uses the `fs` module to manage file system operations, and `fs.statSync()` is used to get the size of a file in the current working directory or in the file system root, respectively. The `console.log()` function is used to print the sizes on the console.
