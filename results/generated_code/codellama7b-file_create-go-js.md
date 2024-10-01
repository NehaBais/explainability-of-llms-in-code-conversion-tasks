Sure! Here's the equivalent code in JavaScript:
```
const fs = require('fs');

function createFile(fn) {
  const fd = fs.openSync(fn, 'w');
  console.log(`file ${fn} created!`);
  return fd;
}

function createDir(dn) {
  fs.mkdirSync(dn, { recursive: true });
  console.log(`directory ${dn} created!`);
}

const main = () => {
  createFile('input.txt');
  createFile('/input.txt');
  createDir('docs');
  createDir('/docs');
};

main();
```
Note that in JavaScript, you need to use the `fs` module to interact with the file system, and you can't use the same `os` package as in Go. Additionally, since JavaScript doesn't have a concept of packages, you don't need to import anything in this case.
