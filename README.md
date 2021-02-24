# Infix_To_Postfix_Eval
C Program For Infix To Postfix Evaluation

C is a general-purpose, procedural computer programming language supporting structured programming, lexical variable scope, and recursion, with a static type system. By design, C provides constructs that map efficiently to typical machine instructions.

This Is A C-Program To Illustrate The Operations To Convert Infix To Postfix Evaluation

Iterate the given expression from left to right, one character at a time :

1. If a character is operand, push it to stack.
2. If a character is an operator, 
        2.1. pop operand from the stack, say it’s s1.
        4.2. pop operand from the stack, say it’s s2.
        5.3. perform (s2 operator s1) and push it to stack.
3. Once the expression iteration is completed, initialize the result string and pop out from the stack and add it to the result.
4. Return the result.

The Operations/Error Illustrated :

    1. Stack is full

    2. Stack is empty

    3. Exception Has Popped Up

The User Will Be Prompted To :

    1. Covert Infix To Postfix Expression

    2. Enter Your Expression

    3. To Quit Enter Fullstop(.)

The GCC File Also Have Been Pushed.
