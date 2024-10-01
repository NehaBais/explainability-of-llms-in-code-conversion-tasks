The code that you will be writing should take in two strings which are then converted to boolean values and passed into the function logic() above - make sure you use the string methods `Boolean.parseBoolean(str)` to convert the strings to booleans, e.g.: 

```java
public class BooleanLogic {
    public static void main(String[] args){
      Scanner sc = new Scanner(System.in); // for input from user
      
      System.out.println("Enter two boolean values (true/false): ");
      String firstInput = sc.nextLine();
      String secondInput = sc.nextLine();
      logic(Boolean.parseBoolean(firstInput), Boolean.parseBoolean(secondInput)); // convert strings to booleans and pass into function logic() 
    }
    
   public static void logic(boolean a, boolean b){
      System.out.println("a AND b: " + (a && b));
      System.out.println("a OR b: " + (a || b));
      System.out.println("NOT a: " + (!a));
   } 
}
```

## Task 2 - Countdown Timer

Write a program that uses the Scanner class to prompt the user for an integer value, and then outputs all of the numbers from that input until 0 is reached. The program should check if it's positive or negative; If it's negative, print out "The number cannot be negative" and finish with the output message "Blast off!".

Scanner sc = new Scanner(System.in);
int numToCountdownFrom = Integer.parseInt(sc.nextLine());

if (numToCountdownFrom < 0){
   System.out.println("The number cannot be negative");
} else {
   for (int i=numToCountdownFrom; i > 0 ;i--){
      System.out.println(i);   
   }
System.out.println("Blast off!");


