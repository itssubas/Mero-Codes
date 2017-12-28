#self means we are using regular method. it is just a convention everyone follows.
#cls means we are using classmethod and it is also just a convention
#classmethods is sometimes called as alternative construtor, here it is implemented
#I've learnt this from this video : https://www.youtube.com/watch?v=rq8cL2XMM5M&t=

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

    @classmethod
    def from_string(cls, emp_str):
        first, last, pay = emp_str.split('-')
        return cls(first, last, pay)

print(Employee.no_of_emps) #0 this time because no any instances are made till yet

emp_1 = Employee('Subash', 'Basnet', 40000)
emp_2 = Employee('test', 'user', 20000)

emp_str_1 = 'John-Doe-70000'
emp_str_2 = 'mahesh-dhakal-48000'
emp_str_3 = 'abhishek-bajracharya-34009'

new_emp_1 = Employee.from_string(emp_str_1)
print(new_emp_1.email) #John.Doe@company.com
print(new_emp_1.pay) #70000

print()
