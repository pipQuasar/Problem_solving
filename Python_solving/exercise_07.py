# Given three values, determine and print a legend accordingly: 
#  “They form a triangle” or “They do not form a triangle.”
# In this exercise I am going to use an isosceles triangle.

# I create the resolutive function
def form_or_not_a_triangle(side1,side2,side3):
    if ((side1 == side2 != side3) or 
        (side2 == side3 != side1) or 
        (side3 == side1 != side2)):
        print("They form a triangle!")
    else: print("They do not form a triangle")
# Show it
form_or_not_a_triangle(1,3,3)