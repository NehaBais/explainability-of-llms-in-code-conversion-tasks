 In JavaScript, you can use the `fs` module's `statSync()` method to get a `stats` object for a given file. Then you can get the size of the file by accessing `stats.size`. Here is how you might translate your Java code into JavaScript:

```javascript
var fs = require('fs');

try {
    var fileA = fs.statSync("file.txt");
    console.log(fileA.size + " B");
    
    var fileB = fs.statSync("/file.txt");
    console.log(fileB.size + " B");
} catch (err) {
    console.error("Error: ", err);
}
```

This JavaScript code performs the same actions as your Java code, but instead of using `java.io.File`, it uses Node.js's built-in `fs` module to read and manipulate file information in a more convenient way. Also, note that in a Unix-like system (including Linux and macOS), the root directory is designated by `/`. So when you create a new File with "/file.txt", it refers to "file.txt" in the root of the filesystem.
