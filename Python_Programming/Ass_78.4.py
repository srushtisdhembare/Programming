# 4: Student Result Calculator
# Develop a Streamlit application that accepts a student's name and marks in three subjects.
# Calculate total marks, percentage and display whether the student has passed or failed. 
# Consider 40 marks out of 100 as the minimum passing marks in each subject.
import streamlit as st 

# Set up page configurations
st.title("Student Result Calculator")

# Clear, focused title and header
st.header("Lets calculate result of 3 subjects !")
st.markdown("---")

sub1 = st.number_input("Enter marks in 1st subject", value=0)
sub2 = st.number_input("Enter marks in 2st subject", value=0)
sub3 = st.number_input("Enter marks in 3st subject", value=0)

percent = (sub1 + sub2 + sub3)/300
percent = percent * 100

if st.button("Calculate Result"):
    if percent > 40:
        st.success(f"**PASS**")
    else:
        st.error(f"**FAIL**")
    
