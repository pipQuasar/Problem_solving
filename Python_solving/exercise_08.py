# Given a triangle represented by its sides L1, L2, L3, determine and print a legend as appropriate:
#  equilateral, isosceles or scalenes.
def wich_triangle(side1,side2,side3):
    if ((side1 == side2 != side3) or 
        (side2 == side3 != side1) or 
        (side3 == side1 != side2)):
        print("They form a isosceles!")
    elif (side1 == side2 == side3):print("They form a equilateral")
    else: print("They form a scalenes")
    
wich_triangle(1,3,2)