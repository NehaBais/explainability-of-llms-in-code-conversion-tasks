Here is the equivalent Java code for your GoLang program: 
```java
public class Main {
   public static void main(String[] args) {
       String str = "Mary had a %s lamb";
       String txt = "little";
       System.out.printf(str, txt);
   }
}
``` 
The java `printf` function is used to replace the GoLang's `Sprintf` function which interpolates strings with variables. It takes the string template as well as variable values and prints out the interpolated result in console.
