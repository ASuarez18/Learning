x = input ("Type a number: ")
try:
    x = int(x)
    print(x)
except ValueError:
    print("Please type an integer")