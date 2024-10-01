 In JavaScript, you can use the `fs` module to accomplish this task. Here is a JavaScript version of your Rust code:

```javascript
const fs = require('fs');
const path = require('path');

function main() {
    let fileNames = process.argv.slice(2);
    if (!fileNames.length) {
        console.error("No file name supplied");
        return process.exit(1);
    }

    fileNames.forEach((fileName, index) => {
        try {
            let stats = fs.statSync(path.resolve(fileName));
            console.log(`Size of ${fileName} is ${stats.size} bytes`);
        } catch (error) {
            if (error.code === 'ENOENT') {
                console.error(`File ${fileName} does not exist`);
            } else {
                console.error(`Error: ${error.message}`);
            }
            return process.exit(2);
        }
    });
}

main();
```
Please note, in JavaScript we do not have the `exit_err` function like Rust as the error handling is more integrated into the standard Node.js runtime. If a file does not exist or any other exception occurs while trying to get the metadata, an error will be thrown and you can handle it in your catch block.
