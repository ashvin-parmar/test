# Re-import necessary libraries after state reset
import random
import string

# Parameters for string generation
length_s = 10**5  # Maximum length of string s
s = ''.join(random.choices(string.ascii_lowercase, k=length_s))  # Generate a random string of lowercase letters
k = random.randint(1, 10**5)  # Generate a random k value

# Output the generated string and k value
s[:100], len(s), k

