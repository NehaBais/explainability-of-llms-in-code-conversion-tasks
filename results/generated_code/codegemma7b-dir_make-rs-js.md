```javascript
const fs = require('fs');

function mkdirp(path) {
  try {
    fs.mkdirSync(path, { recursive: true });
  } catch (err) {
    if (err.code === 'EEXIST') {
      console.log(`Directory '${path}' already exists.`);
    } else {
      throw err;
    }
  }
}

// Example usage
mkdirp('./path/to/dir');
```
