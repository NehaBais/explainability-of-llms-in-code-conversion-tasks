```javascript
const fs = require('fs');

const files = ["input.txt", "docs", "/input.txt", "/docs"];

files.forEach(file => {
    try {
        const stats = fs.statSync(file);
        if (stats.isDirectory()) {
            console.log(`${file} is a directory`);
        } else {
            console.log(`${file} is a file`);
        }
    } catch (error) {
        console.log(`${file} does not exist`);
    }
});
```
