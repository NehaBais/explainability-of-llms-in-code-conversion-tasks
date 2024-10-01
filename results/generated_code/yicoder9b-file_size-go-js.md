Here is the equivalent JavaScript code using Node.js's filesystem module (fs):

```javascript
const fs = require('fs');

function printFileSize(f) {
    try {
        let stat = fs.statSync(f);
        console.log(stat.size);
    } catch (err) {
        console.log(err);
    }
}

printFileSize('input.txt');
printFileSize('/input.txt');
```
Note: The `fs.statSync()` method returns a fs.Stats object which provides information about the file. In this case, we are interested in the size property of that object. This code will throw an error if the file does not exist or another issue happens when trying to access it.
