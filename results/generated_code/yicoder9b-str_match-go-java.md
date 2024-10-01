Here is the equivalent Java code for your Golang program: 
```java
public class Main {
  public static void match (String first, String second) {
    System.out.printf("1. %s starts with %s: %b\n",
      first, second, first.startsWith(second));
    int i = first.indexOf(second);
    System.out.printf("2. %s contains %s: %b, \n", first, second, i >= 0);
    if (i >= 0) {
      System.out.printf("2.1. at location %d\n", i);
      for (int start = i+1; ; start = first.indexOf(second,start + 1)){
        if ((i = first.indexOf(second, start)) < 0){
          break;
        }
        System.out.printf("2.2. at location %d\n", i);
      }  
    System.out.println("2.2. and that's all");
   }
   System.out.printf("3. %s ends with %s: %b\n", 
     first, second, first.endsWith(second));
 }
 public static void main(String args[]) {
  match("abracadabra", "abr");
 }
}
```
