### Answer 

```js
const fs = require("fs").promises;
const path = require("path");
function create() {
  try {
    const fileContent = "";
    const fileName = "output.txt";
    const dirName = "docs";
    if (!fs.existsSync(fileName)) {
      fs.writeFile(fileName, fileContent);
    } else {
      console.log("file already exists");
    }
    if (!fs.existsSync(dirName)) {
      fs.mkdir(dirName);
    } else {
      console.log("directory already exists");
    }
  } catch (err) {
    console.error(err);
  }
}
create();
```
