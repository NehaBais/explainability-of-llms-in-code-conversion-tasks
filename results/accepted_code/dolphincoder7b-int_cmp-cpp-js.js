let prompt = require("prompt");
prompt.start();

prompt.get(["a", "b"], function (err, result) {
  if (!(result.a || result.b)) {
    console.error("could not read the numbers");
    return;
  }

  // test for less-than
  if (result.a < result.b) console.log(result.a + " is less than " + result.b);

  // test for equality
  if (result.a === result.b) console.log(result.a + " is equal to " + result.b);

  // test for greater-than
  if (result.a > result.b)
    console.log(result.a + " is greater than " + result.b);
});
