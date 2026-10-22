# 3: Area of Circle
# Develop a Tkinter application that accepts the radius of a circle. 
# Provide a Calculate Area button to calculate and display the area of the circle.
import tkinter as tk 

root = tk.Tk()

root.title("Tkinter Circle Area Calculator")
root.geometry("600x300")

tk.Label(root,text="Lets find Area",font=("Arial",18,"bold")).pack(pady=10)

tk.Label(root,text="Enter radius").pack()
entry1 = tk.Entry(root)
entry1.pack()

def AreaCircle():
    radius = int(entry1.get())
    
    Area = 3.14 * radius * radius
    
    labelResult.config(text="Maximum is : "+str(round(Area, 2)))

tk.Button(root,text="Calculate Area",command=AreaCircle).pack(pady=15)

labelResult = tk.Label(root,text="",font=("Arial",14))
labelResult.pack()

root.mainloop() 