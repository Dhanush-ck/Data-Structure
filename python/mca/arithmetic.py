
while(True):
    print("Enter 0 for exit")
    choice = input("Enter the operator(+,-,*,/,//,%): ")
    if choice == '0': 
        exit()
    a = float(input("Enter the first number: "))
    b = float(input("Enter the second number: "))
    try:
        match choice:
            case '+':print(f"{a} + {b} = {a+b}")
            case '-':print(f"{a} - {b} = {a-b}")
            case '*':print(f"{a} * {b} = {a*b}")
            case '/':print(f"{a} / {b} = {a/b:.3f}")
            case '//':print(f"{a} // {b} = {a//b}")
            case '%':print(f"{a} % {b} = {a%b:.3f}")
            case _:print("Invalid operator")
    except ZeroDivisionError:
        print("Denominator cannot be zero")
    finally:
        print()