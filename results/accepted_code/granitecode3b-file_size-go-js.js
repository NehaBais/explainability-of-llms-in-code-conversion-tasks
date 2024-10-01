const fs = require("fs");
function printFileSize(f) {
  try {
    const stat = fs.statSync(f);
    console.log(stat.size);
  } catch (err) {
    console.error(err);
  }
}
printFileSize(__dirname + "/input.txt");
printFileSize("/input.txt");
