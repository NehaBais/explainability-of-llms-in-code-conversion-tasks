Sure, the equivalent JavaScript code would be:

```javascript
var fs = require('fs');
var path = require('path');

function createDirectory(dirPath){
    try{
        if (!fs.existsSync(dirPath)) {
            createDirectory(path.dirname(dirPath));
            fs.mkdirSync(dirPath);
        }
    } catch (err) {
        console.error('An error occurred: ' + err.message);
    }
}

var dirPath = "./path/to/dir";
createDirectory(dirPath);
```
This script will create a directory recursively if the parent directories do not exist yet. It uses Node's native fs library to handle this task, which makes it cross-platform compatible. Please make sure to call this function in your main file as required. This example assumes that you have called the `require('moduleName')` syntax. You can replace 'moduleName' with 'fs' or 'path' if they are not available yet.
Also note, it catches any error that may occur while creating directory and prints them to console. If you want to handle these errors in your main function, you can modify the catch block accordingly.
