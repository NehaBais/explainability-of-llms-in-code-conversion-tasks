const fs = require("fs");
const path = "./parent/test"; // Change this with your desired path string

function mkdirSync(path) {
  var dirs = path.split("/");
  var dir = "";

  for (var i = 0; i < dirs.length; i++) {
    dir += dirs[i] + "/";
    if (!fs.existsSync(dir)) {
      fs.mkdirSync(dir);
    }
  }
}
mkdirSync(path);
console.log("Path successfully created");
