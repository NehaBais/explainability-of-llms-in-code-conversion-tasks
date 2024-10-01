const fs = require("fs");

try {
  const size1 = fs.statSync("./input.txt").size;
  console.log(size1);

  const size2 = fs.statSync("/input.txt").size;
  console.log(size2);
} catch (err) {
  console.error(err);
}
