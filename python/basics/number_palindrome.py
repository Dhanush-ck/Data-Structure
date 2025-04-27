num = int(input("Enter the number : "))
temp = num
rev_num = 0
while(num > 0):
    rem = num % 10
    rev_num = rev_num * 10 + rem
    num = num // 10
if(temp == rev_num):
    print("The number is palindrome")
else:
    print("The number is not palindrome")