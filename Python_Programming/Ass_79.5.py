# 5: Basic Login Form
# Develop a Tkinter application that accepts a username and password using Entry widgets. 
# Provide a Login button to validate the entered credentials against predefined values and display an appropriate success or failure message.
import tkinter as tk 

root = tk.Tk()

root.title("Application Login")
root.geometry("600x300")

tk.Label(root,text="Login",font=("Arial",18,"bold")).pack(pady=10)

tk.Label(root,text="Enter username").pack()
entry1 = tk.Entry(root)
entry1.pack()

tk.Label(root,text="Enter password").pack()
entry2 = tk.Entry(root)
entry2.pack()

def Checker():
    username = (entry1.get())
    password = (entry2.get())
    
    if username == "srush" and password == "spreadlove":
        labelResult.config(text="Login Successful")
    else:
        labelResult.config(text=" Login UnSuccessful")

tk.Button(root,text="Check",command=Checker).pack(pady=15)

labelResult = tk.Label(root,text="",font=("Arial",14))
labelResult.pack()

root.mainloop() 