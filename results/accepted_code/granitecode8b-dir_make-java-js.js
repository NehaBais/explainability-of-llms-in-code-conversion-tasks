const fs = require("fs");
const path = require("path");
function mkdirp(dirPath) {
  try {
    fs.mkdirSync(dirPath, { recursive: true });
    console.log("path successfully created");
  } catch (err) {
    if (err.code !== "EEXIST") {
      throw err;
    }
  }
}
const dirPath = path.join(__dirname, "C:/parent/test");
mkdirp(dirPath);
