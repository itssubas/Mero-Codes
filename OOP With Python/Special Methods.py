#Special methods(magic/dunder)
class Employee:
    '''this is a docstring for employee.'''

    raise_amount = 1.04
    no_of_emps = 0
    def __init__(self, first, last, pay):
        self.first = first
        self.last = last
        self.pay = pay
        self.email = first + '.' + last + '@company.com'
        Employee.no_of_emps += 1

    def fullname(self):
        return '{} {}'.format(self.first, self.last)

    def apply_raise(self):
        self.pay = int(self.pay * self.raise_amount)

    def __repr__(self):
        return "Employee:('{}','{}', '{}')".format(self.first, self.last, self.pay)

    def __str__(self):
        return '{} - {}'.format(self.fullname(), self.email)

    def __add__(self, other):
        return self.pay + other.pay

    def __len__(self):
        return len(self.fullname())

emp_1 = Employee('Subash', 'Basnet', 40000)
emp_2 = Employee('test', 'user', 20000)

print(emp_1.__repr__()) #Employee:('Subash','Basnet', '40000')
print(emp_1.__str__()) #Subash Basnet - Subash.Basnet@company.com
print(emp_1 + emp_2) #60000
print(emp_2.__len__()) #9
