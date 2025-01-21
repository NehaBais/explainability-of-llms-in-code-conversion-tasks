const fs = require("fs");
const path = require("path");

function mkdirp(dirPath) {
  return new Promise((resolve, reject) => {
    if (fs.existsSync(dirPath)) {
      resolve();
    } else {
      fs.mkdir(dirPath, { recursive: true }, (err) => {
        if (err) {
          reject(err);
        } else {
          resolve();
        }
      });
    }
  });
}

// Usage
mkdirp("/tmp/some/path/to/dir")
  .then(() => console.log("Directory created successfully"))
  .catch((err) => console.error("Error creating directory:", err));
