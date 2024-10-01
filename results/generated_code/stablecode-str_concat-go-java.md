Here is the equivalent Java code:

```java
public class Main {
    public static void main(String[] args) {
        // text assigned to a string variable
        String s = "hello";

        // output string variable
        System.out.println(s);

        // this output requested by original task descrption, although
        // not really required by current wording of task description.
        System.out.println(s + " literal");

        // concatenate variable and literal, assign result to another string variable
        String s2 = s + " literal";

        // output second string variable
        System.out.println(s2);
    }
}
```
This Java code performs the same operations as your original GoLang code. It first creates a String variable `s` and assigns it the value "hello". Then, this value is printed out using the `System.out.println()` function. After that, another literal ("literal") is concatenated with the original string variable `s`, and this result is again printed out using the `System.out.println()` function. This process is repeated to create a new String variable `s2` which holds the concatenation of `s` and "literal". Finally, this value is also printed out using the `System.out.println()` function.
