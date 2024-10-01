let fs = require("fs");
function create() {
  try {
    fs.openSync("output.txt", "w");
    fs.mkdirSync("docs");
  } catch (error) {
    console.log(`Error in creating file or directory : ${error}`);
  }
}
create();
