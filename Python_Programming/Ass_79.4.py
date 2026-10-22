# 4: Voting Eligibility Checker
# Develop a Tkinter application that accepts a person's name and age.
# Provide a Check Eligibility button to determine whether the person is eligible to vote based on the minimum age of 18 years.

import tkinter as tk 

root = tk.Tk()

root.title("Voting Eligibility Checker")
root.geometry("600x300")

tk.Label(root,text="Lets check eligibility",font=("Arial",18,"bold")).pack(pady=10)

tk.Label(root,text="Enter age").pack()
entry1 = tk.Entry(root)
entry1.pack()

def EligibilityChecker():
    age = int(entry1.get())
    
    if age >= 18:
        labelResult.config(text="Eligible for voting")
    else:
        labelResult.config(text=" Not Eligible for voting")

tk.Button(root,text="Check eligibility",command=EligibilityChecker).pack(pady=15)

labelResult = tk.Label(root,text="",font=("Arial",14))
labelResult.pack()

root.mainloop() 