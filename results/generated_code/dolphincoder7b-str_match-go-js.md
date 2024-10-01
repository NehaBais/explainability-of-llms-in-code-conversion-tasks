Below is the JavaScript code equivalent to the given Golang code. Note that it's not possible to directly translate from Golang to JavaScript, as the Go language does not have a direct equivalent for some of the functions used in this code. Also, due to the dynamic nature of strings in Golang and JavaScript, certain parts of the code may need adjustments or additional libraries depending on what specific use cases you're trying to solve with your JavaScript code:
```javascript
function match(first, second) {
    console.log(`1. ${first} starts with ${second}: ` + first.startsWith(second));
    let i = first.indexOf(second);
    console.log(`2. ${first} contains ${second}: ` + (i >= 0));
    if (i >= 0) {
        console.log(`2.1. at location ${i}`);
        for (let start = i+1;; ) {
            let next_match = first.indexOf(second, start);
            if (next_match < 0) break;
            console.log(`2.2. at location ${next_match}`);
            start += next_match + 1;
        }
        console.log("2.2. and that's all");
    }
    console.log(`3. ${first} ends with ${second}: ` + first.endsWith(second));
}
```
You can call this function by calling `match('abracadabra', 'abr')` in your JavaScript code.
