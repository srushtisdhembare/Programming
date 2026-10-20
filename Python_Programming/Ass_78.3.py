# 3: Simple Interest Calculator
# Develop a Streamlit application that accepts Principal Amount, Rate of Interest and Time Period.
# Provide a Calculate button to calculate and display the Simple Interest.

import streamlit as st 

# Set up page configurations
st.title("Simple Interest Calculator")

# Clear, focused title and header
st.header("Lets find simple interest !")
st.markdown("---")

amount = st.number_input("Enter Principal Amount", value=0)
interest = st.number_input("Enter Rate of Interest", value=0)
time = st.number_input("Enter Time Period", value=0)

SI = (amount*interest*time)/100

if st.button("Calculate Interest"):
    st.success(f"**{SI}**")
    
