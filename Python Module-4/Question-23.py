class Circle:
    def set_radius(self, r):
        self.radius=r

    def area(self):
        return 3.14*self.radius*self.radius

    def perimeter(self):
        return 2*3.14*self.radius

c=Circle()
c.set_radius(7)
print("Area of circle:", c.area())
print("Perimeter of circle:", c.perimeter())
