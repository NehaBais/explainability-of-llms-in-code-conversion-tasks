const assert = require("assert");

const stringUtils = {
  areEqual: (a, b) => a === b,

  areNotEqual: (a, b) => !areEqual(a, b),

  isLexicallyLessThan: (a, b) => a < b,

  isLexicallyGreaterThan: (a, b) => !isLexicallyLessThan(a, b),

  isLexicallyLessThanOrEqualTo: (a, b) =>
    areNotEqual(a, b) || isLexicallyLessThan(a, b),

  isLexicallyGreaterThanOrEqualTo: (a, b) =>
    !isLexicallyLessThanOrEqualTo(a, b),

  areEqualIgnoreCase: (a, b) => a.toLowerCase() === b.toLowerCase(),

  areNotEqualIgnoreCase: (a, b) => !areEqualIgnoreCase(a, b),

  isLexicallyLessThanIgnoreCase: (a, b) => a.toLowerCase() < b.toLowerCase(),

  isLexicallyGreaterThanIgnoreCase: (a, b) =>
    !isLexicallyLessThanIgnoreCase(a, b),

  isLexicallyLessThanOrEqualToIgnoreCase: (a, b) =>
    areNotEqualIgnoreCase(a, b) || isLexicallyLessThanIgnoreCase(a, b),

  isLexicallyGreaterThanOrEqualToIgnoreCase: (a, b) =>
    !isLexicallyLessThanOrEqualToIgnoreCase(a, b),
};

function compare(a, b) {
  console.log(`    ${a}     ${b}`);
  return [
    a === b, // eq
    a !== b, // ne
    a > b, // gt
    a < b, // lt
    a >= b, // ge
    a <= b, // le
  ];
}

function compareCase(a, b) {
  console.log(`    ${a} ignoring case     ${b}`);
  return [
    stringUtils.areEqualIgnoreCase(a, b), // eq
    !stringUtils.areEqualIgnoreCase(a, b), // ne
    stringUtils.isLexicallyLessThanIgnoreCase(a, b), // lt
    !stringUtils.isLexicallyLessThanOrEqualToIgnoreCase(a, b), // gt
    !stringUtils.isLexicallyGreaterThanOrEqualToIgnoreCase(a, b), // ge
    stringUtils.isLexicallyGreaterThanIgnoreCase(a, b), // le
  ];
}

console.log("    eq     ne     gt      lt     ge     le");

assert.deepStrictEqual(compare("ball", "bell"), [0, 1, 0, 1, 0, 1]);
assert.deepStrictEqual(compareCase("ball", "BELL"), [0, 1, 0, 1, 0, 1]);
assert.deepStrictEqual(compareCase("ball", "BALL"), [1, 0, 0, 0, 0, 1]);
assert.deepStrictEqual(compare("YUP", "yep"), [0, 1, 1, 0, 1, 0]);
assert.deepStrictEqual(compareCase("YUP", "YEP"), [0, 1, 1, 0, 1, 0]);
