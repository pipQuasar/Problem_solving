# Given two integer values ​​A and B, report the addition, subtraction, and product.


# I take advantage of the unpacking of variables to assign the value to each one through lambda functions
adittion, subtraction, product = lambda a, b: a+b, lambda a, b: a-b, lambda a, b: a*b

# I show each of the results in the same print
print("Adittion: ",adittion(10,15),     "Subtraction: ",subtraction(25, 15),    "Product :",product(10,10))