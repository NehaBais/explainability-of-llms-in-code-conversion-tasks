Here's the equivalent code in JavaScript:

```javascript
<!DOCTYPE html>
<html>
<body>

<p>Enter two numbers:</p>

<input id="nbr1" type="number"><br><br>
<input id="nbr2" type="number"><br><br>

<button onClick="checkNumbers()">Check</button>

<p id="result"></p>

<script>
function checkNumbers() {
    var nbr1 = parseInt(document.getElementById("nbr1").value);
    var nbr2 = parseInt(document.getElementById("nbr2").value);

    if (nbr1 < nbr2) {
        document.getElementById("result").innerHTML = nbr1 + " is less than " + nbr2;
    } else if (nbr1 > nbr2) {
        document.getElementById("result").innerHTML = nbr1 + " is greater than " + nbr2;
    } else {
        document.getElementById("result").innerHTML = nbr1 + " is equal to " + nbr2;
    }
}
</script>

</body>
</html>
```

This code creates a simple HTML form with two input fields for the user to enter numbers, and a button to check them. When the button is clicked, it calls a JavaScript function named `checkNumbers()`. This function retrieves the values entered by the user and compares them using the `<`, `>` and `==` operators. It then displays the result in the HTML paragraph with the id "result".

The main difference between this code and your Java code is that it uses HTML for the UI, and JavaScript for the logic. Also, this version of the code doesn't need to handle any IO exceptions like the Java version does, as all user input is received from a browser, which inherently handles these errors.
