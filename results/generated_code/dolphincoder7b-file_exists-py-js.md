The JavaScript version of your Python code is as follows:

```JavaScript
const fs = require('fs');

if (fs.existsSync('input.txt')) {
    console.log('input.txt exists in the current working directory');
}

if (fs.existsSync('/input.txt')) {
    console.log('/input.txt exists at the filesystem root');
}

if (fs.existsSync('docs')) {
    console.log('docs is a directory in the current working directory');
}

if (fs.existsSync('/docs')) {
    console.log('/docs is a directory at the filesystem root');
}
```

Please note that it's more common to use `path` module in Node.js for these kind of operations and there are many ways you can do this:

1) Using `require('path')`

const path = require('path');
if (path.exists('input.txt')) {
    console.log('input.txt exists in the current working directory');
}

if (path.exists('/input.txt')) {
    console.log('/input.txt exists at the filesystem root');
}

2) Using `fs.existsSync()`

const fs = require('fs');
if (fs.existsSync('input.txt')) {
    console.log('input.txt exists in the current working directory');
}

3) Using `path.join()`

const path = require('path');
if (fs.existsSync(path.join(__dirname, 'input.txt'))) {
    console.log('input.txt exists in the current working directory');
}

Please note that `fs.existsSync()` is synchronous and it will block your script until the existence check is completed. In Node.js 10+, you can use `fs.promises` to asynchronously verify if a file or directory exists:

const fs = require('fs');
try {
    const exists = await fs.promises.access('input.txt', fs.constants.F_OK);
    console.log('input.txt exists in the current working directory');
} catch (err) {
    // handle error
}

Here `fs.promises.access()` is used to check if a file or directory exists. The second parameter `fs.constants.F_OK` is to check if the path exists and is accessible. If it does not exist, it throws an error.
