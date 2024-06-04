# Overview
This project is a C++ program designed to assist users in typing by predicting the next word they might choose. It keeps track of previously entered words and uses this data to suggest the next word. The user can select one of the four suggested words by pressing Ctrl+1, Ctrl+2, Ctrl+3, or Ctrl+4.

# Features
Word Prediction: Suggests the next word based on previously entered text.
Real-Time Suggestions: Updates suggestions as the user types.
User-Friendly Interface: Displays the suggestions at the bottom of the screen.
Easy Selection: Allows selection of suggestions using keyboard shortcuts (Ctrl+1, Ctrl+2, Ctrl+3, Ctrl+4).

# Requirements
A C++ compiler (e.g., GCC, Clang)
Standard C++ libraries

#Usage
Compile the program:
bash
Copy code
g++ -o texting_assistant texting_assistant.cpp
Run the program:
bash
Copy code
./texting_assistant

# How to Use
Create Dataset: Start the program and input words to create the dataset. Press Enter to finish the input.
Type Text: After creating the dataset, the program will prompt you to "Write away". Start typing your text.
View Suggestions: As you type, the program will display up to four word suggestions at the bottom.
Select a Suggestion: Use Ctrl+1, Ctrl+2, Ctrl+3, or Ctrl+4 to select the corresponding suggestion.


# Code Explanation
The program consists of the following key components:

Data Structure: A word struct that stores a phrase and its frequency.
Comparison Functions: Functions to sort words by frequency or alphabetically.
Predict Function: Displays up to four word suggestions based on the user's input.
Main Function: Manages the user input, tracks word frequencies, displays suggestions, and handles word selection.


# Key Functions
compareByFreq: Sorts words in ascending order of frequencies.
compareByWords: Sorts words alphabetically.
predict: Displays up to four word suggestions.


# Main Loop
Dataset Creation: Collects words from user input to build the initial dataset.
Text Entry: Allows the user to type text and view word suggestions in real-time.
Suggestion Selection: Enables the user to select suggestions using keyboard shortcuts.
