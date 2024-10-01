Below is the equivalent Java code for the C program. In Java you can use equals() and compareTo() methods to compare strings in both case sensitive and insensitive ways.

```java
public class Main {
    public static void main(String[] args) {
        for (int i = 0; i < args.length - 1; i += 2){
            compareStrings(args[i], args[i + 1]);
            System.out.println();
        }
    }

    public static void compareStrings(String a, String b) {
        // Comparing two strings for exact equality
        boolean eq = a.equals(b);

        // Comparing two strings for inequality 
        boolean ne = !eq;

        // Comparing two strings to see if one is lexically ordered before than the other
        boolean lt = a.compareTo(b) < 0;

        // Comparing two strings to see if one is lexically ordered after than the other
        boolean gt = b.compareTo(a) < 0;

        // Comparing two strings for case insensitive equality and inequality
        boolean ceq = a.equalsIgnoreCase(b);
        boolean cne = !ceq;

        System.out.println("String A: " + a + ", String B: " + b);
		    System.out.println("Exact equality : " + eq);
        System.out.println("Inexact equality: " + ne);
        System.out.println("A is lexically ordered before B: " + lt);
        System.out.println("B is lexically ordered before A: " + gt);
        System.out.println("Case insensitive equality : " + ceq);
        System.out.println("Case insensitive inequality: " + cne);
    }
}
``` 

This program reads command line arguments in pairs, compares the strings and prints out the results for exact equality, inequality, order before/after comparisons and case insensitive comparisons.

To run this Java program, compile it first using a Java compiler (`javac Main.java`), then execute it with java runtime (`java Main ball bell YUP YEP BALL BELL ball yup`)*).
The output will be like the C version's output: 1 if condition is true and 0 otherwise.
*)Please replace `Main` with your actual class name if you saved this code in a different file. 

Note that Java handles comparison of numeric strings as lexical (like "9" comes before "10"), unlike C where it treats them numerically (`9 < 10`).
