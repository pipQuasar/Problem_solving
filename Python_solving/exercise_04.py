# Based on an integer value entered by keyboard, you are asked to report:
#     a) The fifth part of said value
#     b) The remainder of the division by 5
#     c) The seventh part of the result of point a)

# I create and initialize variable using input
entered_value = int(input("Enter a value: "))

# I assign values
a_, b_ = entered_value / 5, entered_value % 5
c_ = a_ / 7

# Showing values
print("a):", a_, "\nb):", b_, "\nc):", c_)