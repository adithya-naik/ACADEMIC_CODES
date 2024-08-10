from swampy.TurtleWorld import *

class Point(object):
    """Represents a point in 2-D space"""
# Instantiate objects
p = Point()
p.x = 60
p.y = 15

class Rectangle(object):
    """Represents a rectangle."""
box = Rectangle()
box.color = 'blue'
box.bbox = [[-100, -60],[100, 60]]
    
class Canvas(object):
    """Represents a canvas.
    attributes: width, height, background color"""
a_canvas = Canvas()
a_canvas.width = 500
a_canvas.height = 500

class Circle(object):
    """Represents a circle.
    attributes: center point, radius"""

c = Circle()
c.radius = 50
c.center = Point()
c.center.x = 20
c.center.y = 20

# Define drawing functions
def draw_rectangle(canvas, rectangle):
    drawn_canvas = World()
    drawn_canvas.setup(width=canvas.width, height=canvas.height)
    t = Turtle()
    t.set_world(drawn_canvas)
    t.pen_color = rectangle.color
    t.rectangle(rectangle.bbox)

def draw_point(canvas, point):
    drawn_canvas = World()
    drawn_canvas.setup(width=canvas.width, height=canvas.height)
    t = Turtle()
    t.set_world(drawn_canvas)
    t.move_to(point.x, point.y)
    t.dot()

def draw_circle(canvas, circle):
    drawn_canvas = World()
    drawn_canvas.setup(width=canvas.width, height=canvas.height)
    t = Turtle()
    t.set_world(drawn_canvas)
    t.move_to(circle.center.x, circle.center.y)
    t.circle(circle.radius)

# Uncomment this function if you want to draw the Czech Republic flag
"""
def draw_czech_republic_flag(canvas):
    drawn_canvas = World()
    drawn_canvas.setup(width=canvas.width, height=canvas.height)
    t = Turtle()
    t.set_world(drawn_canvas)
    t.rectangle([[-100, 60], [100, 60]], outline=None, fill='white')
    t.rectangle([[-100, -60], [100, 0]], outline=None, fill='red2')
    points = [[-100,-60], [-100, 60], [0, 0]]
    t.polygon(points, fill='blue3')
"""

# Calling drawing methods
world = World()

draw_point(a_canvas, p)
#draw_circle(a_canvas, c)
# Uncomment the following lines to draw rectangle and flag
# draw_rectangle(a_canvas, box)
# draw_czech_republic_flag(a_canvas)

world.mainloop()
