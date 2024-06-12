import re
import math

def password_strength(password):
    score = 0

    with open('common.txt', 'r') as f:
        common = f.read().splitlines()
    if password in common:
        print("Password was found in a common list.")
        exit()

    # Minimum length requirement
    if len(password) >= 8:
        score += 1
    else:
        print("Password is too short.Please use some more char,digits or symbols.")

    # Other criteria (add your own)
    if re.search(r'[A-Z]', password):
        score += 1
    else:
        print("Password must contain an uppercase letter.")
    if re.search(r'[a-z]', password):
        score += 1
    else:
        print("Password must contain a lowercase letter.")
    if re.search(r'\d', password):
        score += 1
    else:
        print("Password must contain a number.")
    if re.search(r'[!@#$%^&*(),.?":{}|<>]', password):
        score += 1
    else:
        print("Password must contain a symbol.")

    # Entropy calculation
    charset = 0
    if re.search(r'[A-Z]', password):
        charset += 26
    if re.search(r'[a-z]', password):
        charset += 26
    if re.search(r'\d', password):
        charset += 10
    if re.search(r'[!@#$%^&*(),.?":{}|<>]', password):
        charset += 15

    entropy = math.log2(charset) * len(password)

    return score, entropy

try:
    password = input("Enter a password: ")

    score, entropy = password_strength(password)

    if score >= 3 and entropy >= 40:
        print("Password is strong.")
        print("Entropy", entropy)
        print("Score", score)
    else:
        print("Password is weak. Please follow the password policy.")
        print("Entropy", entropy)
        print("Score", score)

except KeyboardInterrupt:
    print("\nPassword check interrupted by the user.")

except Exception as e:
    print("An error occurred:", e)



   
   
