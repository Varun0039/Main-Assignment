class Person:
    def set_person(self, name, age):
        self.name = name
        self.age = age

    def show_person(self):
        print("Name:", self.name)
        print("Age:", self.age)

class Student(Person):
    def set_student(self, roll_no, course):
        self.roll_no = roll_no
        self.course = course

    def show_student(self):
        print("Roll No:", self.roll_no)
        print("Course:", self.course)

s1 = Student()
s1.set_person("Varun", 18)
s1.set_student(22, "CE")
s1.show_person()
s1.show_student()
