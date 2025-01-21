In JavaScript, the equivalent code would be:

```javascript
// Create the file
function createFile(fn) {
    try {
        var fs = require('fs');
        fs.writeFileSync(fn, '');
        console.log(`file ${fn} created!`);
    } catch (err) {
        console.error(err);
    }
}

// Create the directory
function createDir(dn) {
    try {
        var fs = require('fs');
        if (!fs.existsSync(dn)) {
            fs.mkdirSync(dn, { recursive: true });
            console.log(`directory ${dn} created!`);
        } else {
            console.log(`directory ${dn} already exists.`);
        }
    } catch (err) {
        console.error(err);
    }
}

// Call the functions
createFile('output.txt');
createFile('/input.txt');
createDir('docs');
createDir('/docs');
```

Note: The `mkdirSync` method creates a new directory synchronously, so it does not require a try-catch block if you want to handle error. If you want to use a try-catch block for better exception handling in case the directory already exists, you can replace `if (!fs.existsSync(dn)) { ... }` with `try { fs.mkdirSync(dn, { recursive: true }); ... } catch (err) { console.error(err); }`.
