def xor_string(input_string):
    # Initialize the result variable with 0
    result = 0
    
    # Loop through each character in the input string
    for char in input_string:
        # XOR the ASCII value of the character with the result
        result ^= ord(char)
    
    return result

# Test cases
examples = [
    "A",  
    "abc",           # Letters
    "123",           # Numbers
    "@#!$%^",        # Symbols
    "a1@b2#c3$",      # Mixed letters, numbers, and symbols
]

# Run the XOR operation and print results
for example in examples:
    xor_result = xor_string(example)
    print(f"Input: {example} => XOR result: {xor_result}")