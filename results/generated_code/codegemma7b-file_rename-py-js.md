```javascript
const fs = require('fs');

fs.rename('input.txt', 'output.txt', (err) => {
  if (err) throw err;
});

fs.rename('docs', 'mydocs', (err) => {
  if (err) throw err;
});

fs.rename(`${process.cwd()}/input.txt`, `${process.cwd()}/output.txt`, (err) => {
  if (err) throw err;
});

fs.rename(`${process.cwd()}/docs`, `${process.cwd()}/mydocs`, (err) => {
  if (err) throw err;
});
```
