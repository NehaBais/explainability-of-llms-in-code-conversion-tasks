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