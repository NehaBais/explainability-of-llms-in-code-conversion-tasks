/*
  compilation and test in node.js
  $ echo 'compare("ball","bell") ; compare("ball","BELL"); compare("ball", "BALL"); compare("YUP","yep"); compare("ball","BELL"); compare("ball","BALL"); compare("YUP","yep");' > c.js && node c.js
  	eq , ne , gt , lt , ge , le
  ball true false false true true true bell
  ball true false false true true true bell ignoring case
  ball false true true false false false ball
  ball false true true false false false ball ignoring case
  YUP false true true false true false yep
  YUP false true true false true false yep ignoring case
  ball false true false false true true BELL
  ball false true false false true true BELL ignoring case
  ball false true false false true true BALL
  ball false false true false true false BALL ignoring case
  YUP false true false true false true yep
  YUP false true false true false true yep ignoring case
*/

function compare(a, b) {
  console.log(
    `${a} ${a === b} ${a !== b} ${a > b} ${a < b} ${a >= b} ${a <= b} ${b}`,
  );
}

function comparecase(a, b) {
  a = a.toLowerCase();
  b = b.toLowerCase();
  console.log(`${a} ${a === b} ${a !== b} ${a > b} ${a < b} ${a >= b} ${a <= b} ${b} ignoring case
`);
}

console.log("eq , ne , gt , lt , ge , le");
compare("ball", "bell");
comparecase("ball", "BELL");
compare("ball", "BALL");
comparecase("YUP", "yep");
compare("ball", "BELL");
comparecase("ball", "BALL");
comparecase("YUP", "yep");
