```javascript
const fs = require('fs');

const fileA = new File('file.txt');
console.log(`${fileA.size} B`);

const fileB = new File('/file.txt');
console.log(`${fileB.size} B`);
```
