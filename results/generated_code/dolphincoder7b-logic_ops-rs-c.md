This is the converted code in C:
```c
void boolean_ops(bool a, bool b){
    printf("%d and %d  ->  ", a, b);
    puts((a && b)?"true":"false");

    printf("%d or %d  ->  ", a, b);
    puts((a || b)?"true":"false");

    printf("%d xor %d  ->  ", a, b);
    puts((a ^ b)?"true":"false");

    printf("not %d  ->  ", a);
    puts(!a?"true":"false");
}

int main() {
    boolean_ops(1, 1);
    boolean_ops(1, 0);
    boolean_ops(0, 1);
    boolean_ops(0, 0);

    return 0;
}
```
