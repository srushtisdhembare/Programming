# 5: Celsius to Fahrenheit Converter
# Develop a Streamlit application that accepts temperature in Celsius.
#Provide a Convert button to convert the entered temperature into Fahrenheit and display the result.
import streamlit as st 

# Set up page configurations
st.title("Celsius to Fahrenheit Converter")

st.header("Lets calculate temperature !")
st.markdown("---")

celsius = st.number_input("Enter temperature in celsius", value=0)

fahrenheit = (celsius*1.8)+32


if st.button("Convert"):
    st.success(f"**{fahrenheit}**")
    
    
