Here is the equivalent JavaScript code:

```javascript
const fs = require('fs');
const path = require('path');

function createFile(fileName) {
  try {
    fs.writeFileSync(fileName, '');
    console.log(`file ${fileName} created!`);
  } catch (err) {
    console.error(err);
  }
}

function createDir(dirName) {
  try {
    if (!fs.existsSync(dirName))) {
      fs.mkdirSync(dirName, { recursive: true }));
      console.log(`directory ${dirName} created!`);
    }
  } catch (err) {
    console.error(err);
  }
}

createFile("input.txt");
createFile("/input.txt");
createDir("docs");
createDir("/docs");
```
This JavaScript code accomplishes the same task as the given Golang code. It creates a new empty file called "output.txt" of size 0 bytes and an empty directory called "docs". This is done twice: once in the current working directory and once in the filesystem root.
