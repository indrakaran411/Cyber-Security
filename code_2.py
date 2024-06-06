import tkinter as tk
from tkinter import messagebox
from cryptography.fernet import Fernet

# Generate a key for encryption and decryption
# You must use this key for encryption and decryption
key = Fernet.generate_key()
cipher_suite = Fernet(key)

# Function to encrypt text
def encrypt_text():
    plaintext = text_input.get("1.0", tk.END).strip()
    if not plaintext:
        messagebox.showerror("Error", "Input text cannot be empty!")
        return
    ciphertext = cipher_suite.encrypt(plaintext.encode()).decode()
    text_output.delete("1.0", tk.END)
    text_output.insert(tk.END, ciphertext)

# Function to decrypt text
def decrypt_text():
    ciphertext = text_input.get("1.0", tk.END).strip()
    if not ciphertext:
        messagebox.showerror("Error", "Input text cannot be empty!")
        return
    try:
        plaintext = cipher_suite.decrypt(ciphertext.encode()).decode()
    except Exception as e:
        messagebox.showerror("Error", f"Decryption failed: {str(e)}")
        return
    text_output.delete("1.0", tk.END)
    text_output.insert(tk.END, plaintext)

# Setting up the GUI
root = tk.Tk()
root.title("Text Encryption and Decryption")

# Input Text
tk.Label(root, text="Input Text").pack()
text_input = tk.Text(root, height=10, width=50)
text_input.pack()

# Encrypt Button
encrypt_button = tk.Button(root, text="Encrypt", command=encrypt_text)
encrypt_button.pack()

# Decrypt Button
decrypt_button = tk.Button(root, text="Decrypt", command=decrypt_text)
decrypt_button.pack()

# Output Text
tk.Label(root, text="Output Text").pack()
text_output = tk.Text(root, height=10, width=50)
text_output.pack()

# Run the GUI loop
root.mainloop()