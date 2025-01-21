const fs = require("fs");
const path = require("path");

fs.writeFile(path.join(__dirname, "output.txt"), "", function (err) {
  if (err) throw err;
  console.log("The file was saved!");
});

fs.mkdir(path.join(__dirname, "docs"), { recursive: true }, function (err) {
  if (err) throw err;
  console.log("Directory created!");
});
