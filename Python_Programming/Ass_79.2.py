# 2: Find the Largest Number
# Develop a Tkinter application that accepts three numbers from the user. 
# Provide a Find Maximum button to determine and display the largest number.

import tkinter as tk 

root = tk.Tk()

root.title("Tkinter Addition Finder")
root.geometry("600x300")

tk.Label(root,text="Lets find Maximum Number",font=("Arial",18,"bold")).pack(pady=10)

tk.Label(root,text="Enter first number").pack()
entry1 = tk.Entry(root)
entry1.pack()

tk.Label(root,text="Enter second number").pack()
entry2 = tk.Entry(root)
entry2.pack()

tk.Label(root,text="Enter third number").pack()
entry3 = tk.Entry(root)
entry3.pack()

def Maximum():
    no1 = int(entry1.get())
    no2 = int(entry2.get())
    no3 = int(entry3.get())

    max = no1 # 11

    if no2 > max:
        max = no2 # 21

        if no3 > max:
            max = no3 
    else:
        if no3 > max:
            max = no3 
    
    labelResult.config(text="Maximum is : "+str(max))

tk.Button(root,text="Maximum",command=Maximum).pack(pady=15)

labelResult = tk.Label(root,text="",font=("Arial",14))
labelResult.pack()

root.mainloop() 