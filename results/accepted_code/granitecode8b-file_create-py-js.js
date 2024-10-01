const fs = require("fs");
function createDirectory(directory) {
  try {
    fs.closeSync(fs.openSync(directory + "/output.txt", "w"));
  } catch (err) {
    if (err.code !== "EEXIST") throw err;
  }
  try {
    fs.mkdirSync(directory + "/docs");
  } catch (err) {
    if (err.code !== "EEXIST") throw err;
  }
}
createDirectory("."); // current directory
createDirectory("/"); // root directory
