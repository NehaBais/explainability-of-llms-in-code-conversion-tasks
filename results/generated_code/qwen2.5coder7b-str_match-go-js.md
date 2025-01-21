Here is the JavaScript equivalent of your Golang code:

```javascript
function match(first, second) {
    console.log(`1. ${first} starts with ${second}: ${first.startsWith(second)}`);
    let i = first.indexOf(second);
    console.log(`2. ${first} contains ${second}: ${i >= 0}`);
    if (i >= 0) {
        console.log(`2.1. at location ${i}`);
        while ((i = first.indexOf(second, i+1)) !== -1) {
            console.log(`2.2. at location ${i}`);
        }
        console.log('2.2. and that\'s all');
    }
    console.log(`3. ${first} ends with ${second}: ${first.endsWith(second)}`);
}

match("abracadabra", "abr");
```

In JavaScript, string methods `startsWith()`, `indexOf()`, and `endsWith()` perform similar functions to the Golang methods `strings.HasPrefix()`, `strings.Index()`, and `strings.HasSuffix()` respectively. The `indexOf()` method returns `-1` if the specified value is not found in a string, which corresponds to `false` in a boolean context. In the second part of the code, we use a `while` loop with `indexOf()` method to find all occurrences of the substring.
