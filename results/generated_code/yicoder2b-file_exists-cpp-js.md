The equivalent code in JavaScript would be:

```javascript
const { readFileSync, existsSync } = require('fs'); 

function file_exists(path) {
    console.log(path);
    if (  existsSync(path) ) {
        if (  path.isDirectory() ) {
            console.log( " is a directory" );
        } else {
            const stat = fs.statSync(path);
            console.log( ` exists with a file size of ${stat.size} bytes.` );
        }
    } else {
        console.log( " does not exist" );
    }
} 

file_exists('/input.txt');
file_exists('/zero_length.txt');
file_exists('/docs/input.txt');
file_exists('/docs/zero_length.txt');
```

Note: This is just the C++ version of code written in JavaScript. It should be noted that the file operations in JavaScript are a bit different than what you can do with C++, but they essentially give you a similar result to the problem you're solving.
