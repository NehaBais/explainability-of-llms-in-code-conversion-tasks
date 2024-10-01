const { String } = require("stdweb");
// const stdweb = require('stdweb');

function main() {
  let hello = new String("Hello world");
  console.log(hello.add("!!!!")); // add is not a function in JavaScript, so this line will fail

  /* In JavaScript, the "+" operator can be used as a concatenation operator. So we can use the following instead: */
  let helloPlus = new String("Hello world") + "!!!!";
  console.log(helloPlus);
}

function main() {
  let hello = new String("Hello world");

  /* In JavaScript, there is no direct equivalent to std::string::String::push_str. We need to use the push method instead */
  hello.push("!!!!");

  console.log(hello.str); // str is a getter in JavaScript and refers to the internal buffer of String, so this line will show the contents of the variable after the append operation
}
