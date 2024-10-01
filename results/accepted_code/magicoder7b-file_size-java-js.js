var fs = require("fs");

try {
  var fileA = fs.statSync("file.txt");
  console.log(fileA.size + " B");

  var fileB = fs.statSync("/file.txt");
  console.log(fileB.size + " B");
} catch (err) {
  console.error("Error: ", err);
}
