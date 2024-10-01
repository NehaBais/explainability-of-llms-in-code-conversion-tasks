const { stat, open } = require("fs");
const { appendFile, mkdir } = require("fs/promises"); // ES6 promises syntax

(async () => {
  /* async function to handle timeouts and errors */
  try {
    // Create output.txt file of zero bytes and give it the permissions specified in the C code
    await appendFile("output.txt", "");
    const stats = await new Promise((resolve, reject) => {
      stat("output.txt", (err, stats) => (err ? reject(err) : resolve(stats)));
    }); /* equivalent to stat() */
    if (!stats.isFile()) throw new Error("Expected output.txt to be a file"); // check if the type of 'output.txt' is a file not a directory or something else
  } catch (error1) {
    console.log("An error occurred while creating output.txt: ", error1);
  } /* logging the error */

  // Create docs directory with permissions specified in C code
  try {
    await mkdir("docs", { mode: 0o750 });
  } catch (error2) {
    console.log("An error occurred while creating 'docs': " + error2);
  } /* equivalent to mkdir */
})();
