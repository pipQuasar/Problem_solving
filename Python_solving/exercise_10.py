# Enter an age, display one of the following legends on the screen:
#     ❖ 'minor' if the age is less than or equal to 12
#     ❖ 'cadet' if the age is between 13 and 18
#     ❖ 'juvenile' if the age is greater than 18 and does not exceed 26
#     ❖ 'major' in the case that does not meet any of the previous conditions

def what_leyend(age):
    if (age <= 12): print("You're 'minor'")
    elif (age <= 18): print("You're 'cadet'")
    elif (age <= 26): print("You're 'juvenile'")
    else: print("You're 'major'")
    
what_leyend(11)