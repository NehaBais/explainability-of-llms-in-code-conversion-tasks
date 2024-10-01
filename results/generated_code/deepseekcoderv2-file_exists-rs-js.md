## Answer
Here's the JavaScript code:
```javascript
function main() {
  for (let file of ["input.txt", "docs", "/input.txt", "/docs"]) {
    try {
      const attr = fs.statSync(file);
      if (attr.isDirectory()) {
        console.log(`${file} is a directory`);
      } else {
        console.log(`${file} is a file`);
      }
    } catch (e) {
      console.log(`${file} does not exist`);
    }
  }
}
```
