// Using Scanner class to get user input 
Scanner scanner = new Scanner(System.in);
var num1 = scanner.nextInt();
var num2 = scanner.nextInt();
  
function compare(a, b) {
    if (a == b) { // Equal comparison operator
        console.log(a + " is equal to " + b);
    } else if (a < b) { // Less than operator
        console.log(a + " is less than " + b);
    } else { // Greater than operator
        console.log(a + " is greater than " + b);
    }
}