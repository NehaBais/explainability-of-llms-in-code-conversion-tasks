const fs = require("fs");

// Verify the size of a file called input.txt for a file in the current working directory, and another one in the file system root.
let filePath1 = "./file.txt";
let filePath2 = "/file.txt";

try {
  let stats1 = fs.statSync(filePath1);
  console.log(stats1.size + " B");

  let stats2 = fs.statSync(filePath2);
  console.log(stats2.size + " B");
} catch (err) {
  // handle error
  console.error(err);
}
