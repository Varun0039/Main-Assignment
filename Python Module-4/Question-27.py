class Faculty:
    def set_faculty(self, name):
        self.name = name

    def show_faculty(self):
        print("Faculty Name:", self.name)

class Course:
    def set_course(self, title, faculty):
        self.title = title
        self.faculty = faculty

    def show_course(self):
        print("Course Title:", self.title)
        print("Taught by:", self.faculty.name)


f1 = Faculty()
f1.set_faculty("varun")

c1 = Course()
c1.set_course("Python", f1)

f1.show_faculty()
c1.show_course()
