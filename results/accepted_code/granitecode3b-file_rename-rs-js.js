const fs = require("fs");
const err = "File move error";
try {
  fs.renameSync("input.txt", "output.txt");
  fs.renameSync("docs", "mydocs");
  fs.renameSync("/input.txt", "/output.txt");
  fs.renameSync("/docs", "/mydocs");
} catch (e) {
  console.error(err);
  console.log(e);
}
