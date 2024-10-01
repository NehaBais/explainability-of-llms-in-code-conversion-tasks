var fs = require("fs");
var path = require("path");

function createDirectory(dirPath) {
  try {
    if (!fs.existsSync(dirPath)) {
      createDirectory(path.dirname(dirPath));
      fs.mkdirSync(dirPath);
    }
  } catch (err) {
    console.error("An error occurred: " + err.message);
  }
}

var dirPath = "./path/to/dir";
createDirectory(dirPath);
