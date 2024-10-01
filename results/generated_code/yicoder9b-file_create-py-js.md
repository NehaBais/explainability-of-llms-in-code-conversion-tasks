The JavaScript version of the given Python code is as follows: 
Here we will use 'fs' module in Node.js to achieve file operations similar to python.

```javascript
var fs = require('fs');

function create(directory) {
    try {
        fs.writeFileSync(directory + '/output.txt', ''); //Creating empty .txt file
        fs.mkdirSync(directory + '/docs');  // Creating a directory
    } catch (err) {
       console.error(err);
    }
}
create('.');   // current directory
create('/');   // root directory
```
Please make sure the Node.js environment is set up properly and you have necessary permissions to perform these operations.
