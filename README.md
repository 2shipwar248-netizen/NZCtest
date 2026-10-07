# ♟️ The Chessboard Rice Problem in C

Welcome to my repository! This is a C program that solves the legendary mathematical puzzle of doubling grains of rice on a chessboard. I built this project completely by myself while learning C programming at **14 years old**! 🚀

## 📜 About the Project

According to the ancient legend, a king wanted to reward a wise man. The man asked for a simple reward: 1 grain of rice on the first square of a chessboard, 2 on the second, 4 on the third, and so on, doubling every time up to $64$ squares ($8 \times 8$).

This program calculates the exact number of rice grains per box and dynamically converts the total weight from milligrams ($\text{mg}$) all the way up to **metric tons**!

## ✨ Features

* **Dynamic Memory Allocation:** Utilizes `malloc` and `calloc` with custom error handling to manage heap memory safely.

* **Smart Unit Conversion:** Automatically scales the weight output from milligrams ($\text{mg}$), grams ($\text{g}$), kilograms ($\text{kg}$), to `metric tons` based on the massive scale.

* **Custom Structures:** Implements a custom `struct memoryArray` to manage pointers efficiently.

* **Overflow Prevention:** Safely controls loop boundaries to avoid unexpected integer overflow crashes.

## 📂 Code Overview

* **`struct memoryArray`**: A custom structure holding pointers for values, sums, and rice counts.

* **`v(uint8_t b)`**: Calculates the total number of chessboard squares ($8 \times 8 = 64$).

* **`w(uint8_t x)`**: The core logic function handling heap allocation, error states, the main calculation loop, conditional unit printing, and memory cleanup (`free`).

* **`main()`**: Entry point utilizing a switch-case statement to handle status codes returned by the core function.

## 🛠️ How to Compile and Run

If you want to run this code on your local machine, make sure you have a C compiler installed (such as GCC).

```
#Step1: Clone the repository

#Step2: Navigate into the directory
cd chessboard-rice-c

#Step3: Compile the C program
gcc main.c -o chessboard

#Step4: Run the executable
./chessboard

```

Or, simply run only exe file with ./chessboard command.

### 👤 Author

Built with 💻 and curiosity by a 14-year-old C programming learner! Feel free to star ⭐ this repository if you like it.
