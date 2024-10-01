const fs = require("fs");
function mkdir(path) {
  return new Promise((resolve, reject) => {
    fs.promises
      .mkdir(path, { recursive: true })
      .then(() => resolve())
      .catch((err) => reject(err));
  });
}
mkdir("./path/to/dir")
  .then(() => console.log("path successfully created"))
  .catch((err) => console.error(err));
