let fs = require("fs");
try {
  if (!fs.existsSync("C:/parent/test")) {
    // create directories leading to "test" and 'C' parent
    fs.mkdirSync("C:/parent", { recursive: true });
    fs.mkdirSync("C:/parent/test");
  } else {
    console.log("Directory already exists!");
  }
} catch (err) {
  console.error(`Error in creating directories: ${err}`);
}
