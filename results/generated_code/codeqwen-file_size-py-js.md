The equivalent code in JavaScript would be:

```javascript
var size = require('fs').statSync('input.txt').size;
var sizeRoot = require('fs').statSync('/input.txt').size;
```
In this snippet, `require('fs')` is used to import the built-in 'fs' module in Node.js, which allows file system operations. `statSync()` function is called on it with the path of the file as its argument to get information about the file including its size in bytes. The size is then assigned to the variable 'size'.

Please note that JavaScript doesn't have a built-in way to handle files in the root directory for security reasons, so you need to use absolute paths if you want to work with those.
