#when it is used as @classmethod or @staticmethod, they are called decorators
#staticmethod doesn't take instance(self) or class(cls) as the first argument
#I've learnt this from this video : https://youtu.be/rq8cL2XMM5M?t=675

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

    @staticmethod
    def is_workday(day):
        if day.weekday() == 5 or day.weekday() == 6:
            return False
        return True

print(Employee.no_of_emps) #0 this time because no any instances are made till yet

emp_1 = Employee('Subash', 'Basnet', 40000)
emp_2 = Employee('test', 'user', 20000)

import datetime
my_date = datetime.date(2017, 12, 28)

print(Employee.is_workday(my_date)) #True because today is Thrusday