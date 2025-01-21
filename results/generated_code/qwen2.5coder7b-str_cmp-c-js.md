Here is the JavaScript equivalent of your C code:

```javascript
function streq(a, b) { return (a === b); } 
function strne(a, b) { return !streq(a, b); } 
function strlt(a, b) { return (a.localeCompare(b) < 0); } 
function strle(a, b) { return (a.localeCompare(b) <= 0); } 
function strgt(a, b) { return strlt(b, a); } 
function strge(a, b) { return strle(b, a); }

function strceq(a, b) { return (a.toLowerCase() === b.toLowerCase()); } 
function strcne(a, b) { return !strceq(a, b); } 
function strclt(a, b) { return (a.toLowerCase().localeCompare(b.toLowerCase()) < 0); } 
function strcle(a, b) { return (a.toLowerCase().localeCompare(b.toLowerCase()) <= 0); } 
function strcgte(a, b) { return strclt(b, a); } 
function strcge(a, b) { return strcle(b, a); }

function compare(a, b) {
    console.log(a + " " +
        streq(a,b) + " " +
        strne(a,b) + " " +
        strgt(a,b) + " " +
        strlt(a,b) + " " +
        strge(a,b) + " " +
        strle(a,b) + " " +
        b
    );
}

function comparecase(a, b) {
    console.log(a + " " +
        strceq(a,b) + " " +
        strcne(a,b) + " " +
        strcgte(a,b) + " " +
        strclt(a,b) + " " +
        strcge(a,b) + " " +
        strcle(a,b) + " " +
        b
    );
}

let args = process.argv.slice(2);

if (args.length % 2 === 0) {
    while (args.length > 1) {
        let a = args.shift();
        let b = args.shift();

        compare(a, b);
        comparecase(a, b);
    }
}
```

This JavaScript code does everything your C code did: it compares two strings for exact equality, inequality, and lexical order. It also handles both case-sensitive and case-insensitive comparisons. The `localeCompare()` method is used for comparing strings in a language-sensitive manner.

To test this code in Node.js, you can save the script to a file (e.g., compare-strings.js) and run it with two string arguments (e.g., `node compare-strings.js ball bell`).
