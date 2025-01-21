Here is the equivalent code in JavaScript:

```javascript
const fs = require('fs');
const path = require('path');

function createFile(fn) {
    try {
        fs.writeFileSync(fn, '');
        console.log(`file ${fn} created!`);
    } catch (err) {
        console.error(err);
    }
}

function createDir(dn) {
    try {
        if (!fs.existsSync(dn)) {
            fs.mkdirSync(dn);
            console.log(`directory ${dn} created!`);
        } else {
            console.log(`directory ${dn} already exists!`);
        }
    } catch (err) {
        console.error(err);
    }
}

function main() {
    createFile('output.txt');
    createFile('/output.txt');
    createDir('docs');
    createDir('/docs');
}

main();
```

Please note that in Node.js, we can't directly create a file or directory at the filesystem root. So, if you try to create `'/output.txt'` or `'/docs'`, it won't work and will throw an error. The above code is assuming 'here', i.e., in the current working directory.

Also note that Node.js does not have a built-in way to check if a file exists in a synchronous manner, so we use `fs.existsSync()`. If you want to do this asynchronously, you would need to use `fs.exists()` or promisified version of it like `fs.promises.exists()`.
