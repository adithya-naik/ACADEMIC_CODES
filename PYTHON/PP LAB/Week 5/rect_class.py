class Rectangle :
    def __init__(self,length,bredth,unit_cost = 0):
        self.length = length
        self.bredth = bredth
        self.unit_cost = unit_cost

    def get_area(self):
        return self.length*self.bredth

    def calculate_cost(self):
        area = get_area()
        return area*self.unit_cost

r = Rectangle(160,120,2000)
print("Area of rectangle : %s sq.units "%(r.get_area()))
        
