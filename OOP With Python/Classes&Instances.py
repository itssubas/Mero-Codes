class Employee:

    def __init__(self, first, last, pay): #init method initializes the instance
        self.first = first
        self.last = last
        self.pay = pay
        self.email = first + '.' + last + '@company.com'

    def fullname(self):
        return '{} {}'.format(self.first, self.last)

emp_1 = Employee('Subash', 'Basnet', 40000)
emp_2 = Employee('test', 'user', 20000)

print(emp_1.email) #Subash.Basnet@company.com
print(emp_2.email) #test.user@company.com
print(emp_1.fullname()) #Subash Basnet
print(emp_1.fullname) #<bound method Employee.fullname of <__main__.Employee object at 0x10402aac8>>
#Remember here, fullname is a method, so parenthesis is required

print(Employee.fullname(emp_2))