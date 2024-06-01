#   Given two distinct integer values, issue an appropriate legend that reports 
#   which is the greatest among them.

# I create a lambda function that's gonna show the greatest among the two values.
whos_greatest = lambda a,b: print("A is greatest than B.") if a > b else print("B is greatest than A.")
# Showing result
whos_greatest(10,22)