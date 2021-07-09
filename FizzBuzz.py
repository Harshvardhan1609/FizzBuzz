range_1 = int(input("Please enter start number : \n"))
range_2 = int(input("Please enter end number : \n "))
for number in range(range_1,range_2 + 1) :
  if number%3 == 0 and number%5 == 0 :
    print("FizzBuzz")
  elif number%3 == 0 :
    print("Fizz")
  elif number%5 == 0 :
    print("Buzz")
  else:
    print(number)
