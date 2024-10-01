The given Golang code creates an empty file and directory in the current working directory and root filesystem respectively. We can convert this to a JavaScript version as follows:

```javascript
const fs = require('fs');
const path = require('path');

function createFile(fn) {
    fs.writeFileSync(fn, '');
    console.log(`file ${fn} created!`);
}

function createDir(dn) {
    fs.mkdirSync(dn);
    console.log(`directory ${dn} created!`);
}

createFile('input.txt');
createFile(path.join('/', 'input.txt'));
createDir('docs');
createDir(path.join('/', 'docs'));
```

This code uses Node's built-in `fs` and `path` modules to create empty files and directories. It also uses the `console.log` method for outputting messages, replacing Golang's print function. Note that in JavaScript, we use `join` from path module to handle paths. Also note that unlike Go, JavaScript's `writeFileSync` and `mkdirSync` methods do not return a value, so they are called directly with the desired file or directory name.
