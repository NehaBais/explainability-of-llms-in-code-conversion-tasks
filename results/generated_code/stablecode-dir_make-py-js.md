The equivalent JavaScript function using Node.js built-in `fs` module would look like this:

```javascript
const fs = require('fs');
const path = require('path');

function mkdirp(filePath){
    try {
        if (!fs.existsSync(filePath))) {
            mkdirp(path.dirname(filePath)));
            fs.mkdirSync(filePath);
         }
    } catch (err) {
        console.error(err);
    }
}
```
This JavaScript function will create a directory and any missing parents, similar to the posix `mkdir -p` command or the `os.makedirs()` method in Python.

It is important to note that this solution uses synchronous methods (`fs.existsSync()`, `fs.mkdirSync()`) which may block Node.js event loop and thus, may affect application performance and responsiveness on high load or stress situations. 

For a better performing asynchronous implementation using only the built-in `fs` module, you can refer to [this alternative solution](https://gist.github.com/codebytere/3a5d550e4e8f7c1bc9).
