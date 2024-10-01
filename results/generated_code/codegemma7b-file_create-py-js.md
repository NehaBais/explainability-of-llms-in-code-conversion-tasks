```javascript
const fs = require('fs');
const path = require('path');

function create(directory) {
  try {
    fs.writeFileSync(path.join(directory, 'output.txt'), '');
    fs.mkdirSync(path.join(directory, 'docs'));
  } catch (err) {
    console.error(err);
  }
}

create('.'); // current directory
create('/'); // root directory
```
