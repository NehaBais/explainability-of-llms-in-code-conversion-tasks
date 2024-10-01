const fs = require("fs");
const pathlib = require("path");

function mkdirp(path) {
  return new Promise((resolve, reject) => {
    try {
      let parts = path.split("/").filter((part) => part);
      for (let i = 0; i < parts.length; ++i) {
        let dirPath = pathlib.join(...parts.slice(0, i + 1));
        if (!fs.existsSync(dirPath)) {
          fs.mkdirSync(dirPath);
        }
      }
      resolve();
    } catch (error) {
      reject(error);
    }
  });
}

mkdirp("./path/to/dir")
  .then(() => console.log("Directory created"))
  .catch((err) => console.error(err));
