The JavaScript equivalent of the Rust code provided above would be:
```JavaScript
const fs = require('fs');

for (const file of ['input.txt', 'docs', '/input.txt', '/docs']) {
    try {
        const attr = fs.statSync(file);

        if (attr.isDirectory()) {
            console.log(`${file} is a directory`);
        } else {
            console.log(`${file} is a file`);
        }
    } catch (_) {
        console.log(`${file} does not exist`);
    }
}
```
This JavaScript script uses the `fs` module from Node.js to check if a file or directory exists and get its type (whether it's a file or a directory). The `statSync` method is used for synchronous operations, while `stat` can be used with asynchronous callbacks. In this case, we're using a simple `try`/`catch` block to handle errors from the filesystem functions in JavaScript.
