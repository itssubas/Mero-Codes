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

print(Employee.no_of_emps) #0 this time because no any instances are made till yet

emp_1 = Employee('Subash', 'Basnet', 40000)
emp_2 = Employee('test', 'user', 20000)

print(emp_1.pay) #40000

emp_1.apply_raise()
print(emp_1.pay) #41600
print(Employee.no_of_emps) #2 because we made two instances of Employee

