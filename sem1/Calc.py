from decimal import Decimal, DivisionByZero, InvalidOperation

def calculator_operation(N, O, D):
    num1 = Decimal(N)
    num2 = Decimal(D)

    if O == '+':
        return num1 + num2
    elif O == '-':
        return num1 - num2
    elif O == '*':
        return num1 * num2
    elif O == '/':
        if num2 == 0:
            return "ERROR"    
        else:
            return round(num1 / num2, 2)
    else:
        return "Invalid operator"

if __name__ == "__main__":
    N, O, D = input().split()

    result = calculator_operation(N, O, D)

    if O == '/':
        print("{:.2f}".format(result))
    else:
        print(result)
