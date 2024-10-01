 In JavaScript, you can use the `fs` module to accomplish this. Here is a conversion of your Golang code into JavaScript:

```javascript
const fs = require('fs');

function createFile(fn) {
    fs.writeFileSync(fn, "");
    console.log("file", fn, "created!");
}

function createDir(dn) {
    fs.mkdirSync(dn, { recursive: true });
    console.log("directory", dn, "created!");
}

createFile("input.txt");
createFile("/input.txt");
createDir("docs");
createDir("/docs");
```
