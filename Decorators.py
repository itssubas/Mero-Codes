#decorators in python

def add_wrapping(item):
    def wrapped_item():
        return 'A wrapped up box of {}'.format(str(item()))
    return wrapped_item

@add_wrapping
def new_laptop():
    return 'a new seventh gen i7 laptop.'

@add_wrapping
def new_cellphone():
    return 'a new OnePlus 3 cellphone.'

print(new_laptop()) #output: A wrapped up box of a new seventh gen i7 laptop.
print(new_cellphone()) #output: A wrapped up box of a new OnePlus 3 cellphone.

