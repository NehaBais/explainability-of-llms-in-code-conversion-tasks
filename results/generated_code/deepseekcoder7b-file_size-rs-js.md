The JavaScript equivalent of the Rust code would be as follows, using built-in Node.js modules `fs` and `process`:

```javascript
const fs = require('fs');
const process = require('process');

function main() {
    let fileName = process.argv[2] || exitErr("No file name supplied", 1);
    try {
        let stats = fs.statSync(fileName);
        console.log(`Size of ${fileName} is ${stats.size} bytes`);
    } catch (e) {
        exitErr(e, 2);
    }
}

function exitErr(msg, code) {
    console.error(`Error: ${msg}`);
    process.exit(code);
}

main();
```

This code accomplishes the same task as your Rust script. It gets the filename from arguments to the script and prints the size of that file in bytes to the console. If there is no such file or any other error happens, it exits with a non-zero status (as specified by exitErr function).

