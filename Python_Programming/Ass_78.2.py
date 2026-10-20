# Even or Odd Number
# Develop a Streamlit application that accepts an integer from the user. Provide a Check button to determine
# whether the entered number is even or odd and display the result.

import streamlit as st 

# Set up page configurations
st.set_page_config(page_title="Even or Odd Checker", page_icon="🔢")

# Clear, focused title and header
st.title("Number Property Analyzer")
st.markdown("---")

st.header("Even or Odd Checker")
st.write("Enter an integer below to determine its parity.")

# Input field restricted to whole integers
num = st.number_input("Enter a whole number:", value=0, step=1)

# Check button logic with styled feedback alerts
if st.button("Analyze Number", type="primary"):
    if num % 2 == 0:
        st.success(f"**{num}** is an **EVEN** number.")
    else:
        st.info(f" **{num}** is an **ODD** number.")
