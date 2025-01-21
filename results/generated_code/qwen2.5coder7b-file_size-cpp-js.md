In JavaScript, you can use the `fs` module to work with files. Here is how you could convert this C++ code:

```javascript
const fs = require('fs');

function printFileSize(filename) {
    try {
        const size = fs.statSync(filename).size;
        console.log(`Size of file ${filename} is ${size} bytes.`);
    } catch (ex) {
        console.error(ex.message);
    }
}

printFileSize('input.txt');
printFileSize('/input.txt');
```

In this JavaScript code, the `fs` module's `statSync()` method is used to retrieve information about a file. The `size` property of the returned object gives the size of the file in bytes. Any errors that occur during this process are caught and logged to the console.

However, there's one important thing to note: unlike C++, JavaScript running in Node.js does not have direct access to the local filesystem due to its security restrictions. If you run this code from a web browser, it will only work if `input.txt` is located at the same URL as your script (i.e., loaded from your local machine). Running on a server or another environment without these restrictions might not give you the expected result.
