In JavaScript, the equivalent code would be:

```javascript
const fs = require('fs');
const path = require('path');

function create(directory) {
  fs.open(path.join(directory, 'output.txt'), 'w', (err) => {
    if (err) throw err;
    
    fs.mkdir(path.join(directory, 'docs'), (err) => {
      if (err) throw err;
      
      console.log(`Created ${directory}: output.txt and docs`);
    });
  });
}

create('.'); // current directory
create('/');
```
This code uses the `fs.open` method to create a new file in the specified directory with 'w' mode, which stands for write. It also uses `fs.mkdir` to create an empty directory inside the same directory. The function is then called twice with '.' and '/' as arguments to create the files and directories in the current working directory and filesystem root respectively.
