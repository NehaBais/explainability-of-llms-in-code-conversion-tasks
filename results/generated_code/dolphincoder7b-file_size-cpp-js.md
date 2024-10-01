```javascript
const fs = require('fs');
const { promisify } = require('util');

const statAsync = promisify(fs.stat);

async function printFileSize(filename)  {
    try  {
        const size = await statAsync(filename).size;
        console.log(`Size of file ${filename} is ${size} bytes.`);
     } catch (err)  {
        console.error(`${err}`);
     }
}

printFileSize('input.txt');
printFileSize('/input.txt');
```
