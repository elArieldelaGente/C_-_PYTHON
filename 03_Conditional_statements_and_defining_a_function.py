#Define a function
def cheers ( name = '' ) :
    if len(name) > 0 :
        print(f"Hello {name}")
    else:
        print("Hello someone with no name assigned")

#Calling the function with an argument
cheers('Bob')

#Calling the function with the default argument
cheers()