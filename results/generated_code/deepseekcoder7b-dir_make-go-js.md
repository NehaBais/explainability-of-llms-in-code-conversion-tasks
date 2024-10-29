You can use `fs` module in NodeJS to create a directory if it doesn't exist. Here is the equivalent JavaScript code.

Please note that recursive creation of directories isn't built-in functionality of NodeJS, so you need to create your own function for it using 'mkdirp' npm package:

```javascript
const fs = require('fs');
const mkdirp = require('mkdirp');

function mkdirAll(path) {
    if (!fs.existsSync(path)) {
        mkdirp(path, (err) => {
            if (err) throw err;
          console.log("Directory created!");
        });
      } else {
         console.log('Directory already exists');
      } 
}

mkdirAll("/tmp/some/path/to/dir");
```

