const fs = require("fs");

function createFile() {
  try {
    fs.writeFileSync("output.txt", "");
  } catch (err) {
    console.error(err);
  }
}

createFile();
try {
  fs.mkdirSync("/docs");
} catch (err) {
  console.error(err);
}
