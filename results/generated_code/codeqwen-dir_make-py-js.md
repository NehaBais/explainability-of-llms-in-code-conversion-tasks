The equivalent code in JavaScript would be:

```javascript
const fs = require('fs');
const path = require('path');

function mkdirp(dirPath) {
  try {
    fs.mkdirSync(dirPath, { recursive: true });
  } catch (error) {
    if (error.code !== 'EEXIST') {
      throw error;
    }
  }
}
```

This function will create a directory and its parents if they don't already exist. If the directory does exist, it simply returns without throwing an error.
