# computerv1
A little polynomial solver done in c++.



Polynomial solver (<= 2nd)

Input : <string> 
Output : <string>

### Objects
    Expression (list of terms and operators)
    Terms (Number or Unknown)
        - Number (Integer or real) (Imaginary numbers ?)
        - Unknown (A letter, if multiple, don't solve)
    Operator


## Parsing 
    "5 * X^0 + 4 * X^1 - 9.3 * X^2 = 1 * X^0"
    Literal Operand Literal ..etc..
    Number Operand Unknown Operand ..etc..
    left expression = right expression

## Execution
		