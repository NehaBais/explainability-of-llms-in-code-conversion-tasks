 Here is the equivalent Java code for your Golang program:

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
The Java version is similar to the Go code you provided except for the print statements. In Java, `fmt.Println()` serves a similar purpose as `println()` in Go but `System.out.println` is used instead of it.
