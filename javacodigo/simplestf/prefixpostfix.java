/*Two forms, prefix and postfix, may be used with both the increment and decrement operators.
With prefix form, the operator appears before the operand, while in postfix form, the operator appears after the operand. Below is an explanation of how the two forms work:
Prefix: Increments the variable's value and uses the new value in the expression.
Example: */

        int x = 34;
        int y = ++x; // y e x valem 35
        
/*The value of x is first incremented to 35, and is then assigned to y, so the values of both x and y are now 35.
Postfix: The variable's value is first used in the expression and is then increased.
Example: */

        int x = 34;
        int y = x++; // y vale 34, apenas o x vale 35
