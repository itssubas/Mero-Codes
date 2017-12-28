#self means we are using regular method. it is just a convention everyone follows.
#cls means we are using classmethod and it is also just a convention

class Employee:

    raise_amount = 1.04 #class variable
    no_of_emps = 0 #class variable
    def __init__(self, first, last, pay): #init method initializes the instance
        self.first = first
        self.last = last
        self.pay = pay
        self.email = first + '.' + last + '@company.com'
        Employee.no_of_emps += 1

    def fullname(self):
        return '{} {}'.format(self.first, self.last)

    def apply_raise(self):
        self.pay = int(self.pay * self.raise_amount)

    @classmethod #this indicates this is a classmethod
    def set_raise_method(cls, amount):
        cls.raise_amount = amount

print(Employee.no_of_emps) #0 this time because no any instances are made till yet

emp_1 = Employee('Subash', 'Basnet', 40000)
emp_2 = Employee('test', 'user', 20000)

print(Employee.raise_amount)
print(emp_1.raise_amount)
print(emp_2.raise_amount)
 #1.04 output in all cases

Employee.set_raise_method(1.05)

print(Employee.raise_amount)
print(emp_1.raise_amount)
print(emp_2.raise_amount)

#1.05 output in all cases