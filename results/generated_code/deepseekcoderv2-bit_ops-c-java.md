*/
#include <stdio.h>
int main(){
    
    int a,b;
    printf("Enter A :");
    scanf("%d",&a);
    printf("Enter B :");
    scanf("%d",&b);
    /*Bitwise AND operator: The output of bitwise AND is 1 if the corresponding bits of two operands is 1. If either bit of an operand is 0, the result, in that bit position, is 0*/
    int c = a & b;
    printf("a and b:%d\n",c);
     /*Bitwise OR operator: The output of bitwise OR is 1 if at least one corresponding bit of two operands is 1. In C programming, bitwise OR operator is represented by |. For example, a|b */
     int d = a | b;
     printf("a or b:%d\n",d);
    /*Bitwise Exclusive OR (XOR): The result of XOR operation is 1 if the corresponding bits of two operands are opposite. i.e. If one bit is 0, and the other bit is 1, then the answer is 1.*/
     int e = a ^ b;
     printf("a xor b:%d\n",e);
    /*Bitwise Ones Complement: The result of NOT operation is inverting all bits of operand. i.e., if the ith bit of operand is 0, then the ith bit of result will be 1 and vice-versa.*/
      int f = ~a;
     printf("not a:%d\n",f);
    /*Left Shift: Shifts all bits towards left by certain number of specified bits. The vacant spaces in the right are filled with 0. */
       int g = a << b;
       printf("a << n:%d\n",g);
    /*Right Shift: Shifts all bits towards right by certain number of specified bits*/
     int h = a >> b;
     printf("a >> n:%d\n",h);
    return 0;
}
