# C++ Games Collection 🎮

A comprehensive collection of console-based games developed in C++ as part of a semester project. This repository contains multiple interactive games with scoring systems, timing features, and user-friendly interfaces.

## 📋 Table of Contents

- [Project Overview](#project-overview)
- [Games Collection](#games-collection)
- [Features](#features)
- [Installation & Compilation](#installation--compilation)
- [Usage](#usage)
- [Project Structure](#project-structure)
- [Technical Details](#technical-details)
- [Contributors](#contributors)

## 🎯 Project Overview

This project showcases a collection of C++ console games demonstrating various programming concepts including:
- Object-Oriented Programming (Classes and Objects)
- File I/O Operations
- Time Management and Performance Tracking
- Random Number Generation
- Menu-driven Interfaces
- Score Management Systems

## 🎮 Games Collection

### **Game Hub** (Main Project)
A comprehensive gaming platform that combines multiple games with an animated interface:

#### **1. Word Scramble Game**
- **Objective**: Unscramble computer programming-related words
- **Features**:
  - 50 predefined programming terms (Function, Compiler, Algorithm, etc.)
  - 5 rounds per game
  - Score tracking and timing
  - File-based score persistence (`Score.txt`)
  - Interactive menu system with instructions
- **Gameplay**: Players receive scrambled words and must type the correct original word

#### **2. Sequence Sort Game**
- **Objective**: Sort random number sequences correctly
- **Features**:
  - Random 5-number sequences (1-50 range)
  - 3 rounds per game
  - Bubble sort algorithm implementation
  - Score and time tracking
  - File-based score persistence (`Score1.txt`)
- **Gameplay**: Players view a random sequence and must enter it back in sorted order

### **Individual Games**

#### **3. Rock Paper Scissors**
- **Features**:
  - Two-player competitive gameplay
  - Game history logging with timestamps
  - Winner determination logic
  - File logging to `game_history.txt`

#### **4. Game of Minus** (Math Challenge)
- **Features**:
  - Two-player math competition
  - Random subtraction problems (1-100 range)
  - 5 questions per player
  - Time tracking for each player
  - Winner determination based on score and time

#### **5. Jumper Table** (Multiplication Game)
- **Features**:
  - Customizable multiplication table ranges
  - Two-player competitive format
  - 5 questions per player
  - Dynamic difficulty adjustment
  - Score and time-based winner selection

#### **6. Roll Dice Game**
- **Features**:
  - Two-player dice rolling competition
  - 10 rounds per player
  - Interactive dice rolling (press Enter to roll)
  - Total score accumulation
  - Simple winner determination

#### **7. Typing Game**
- **Features**:
  - Random string generation (3-7 characters)
  - Two-player typing competition
  - 5 rounds per player
  - Accuracy and speed tracking
  - Capital letter challenges

## ✨ Features

### **Core Features**
- **Animated Menu Interface**: Eye-catching ASCII art with moving elements
- **Score Persistence**: All scores saved to text files for future reference
- **Time Tracking**: Precise gameplay timing using `<ctime>` library
- **Object-Oriented Design**: Clean class structures for game logic
- **Error Handling**: File I/O error checking and validation
- **Interactive Navigation**: Arrow key navigation in menus

### **Technical Features**
- **Random Number Generation**: Seeded with current time for true randomness
- **File Management**: Automatic score file creation and management
- **Memory Management**: Efficient array and string handling
- **Cross-Platform Compatibility**: Uses standard C++ libraries

## 🚀 Installation & Compilation

### **Prerequisites**
- C++ Compiler (GCC, MinGW, Visual Studio, or any C++11 compatible compiler)
- Windows environment (for `<conio.h>` and `<windows.h>` dependencies)

### **Compilation Instructions**

#### **For Game Hub (Main Project):**
```bash
# Navigate to Final project/Game hub Final/
cd "Final project/Game hub Final"

# Compile the main game hub
g++ "Game HUB.cpp" -o "Game HUB.exe"

# Run the game
./Game\ HUB.exe
```

#### **For Individual Games:**
```bash
# Navigate to Games directory
cd Games

# Compile any individual game (example: Roll Dice)
g++ "Roll Dice.cpp" -o "Roll Dice.exe"

# Run the compiled game
./Roll\ Dice.exe
```

#### **For Other Standalone Games:**
```bash
# Navigate to Final project directory
cd "Final project"

# Compile Rock Paper Scissors
g++ "Rock paper.cpp" -o "Rock paper.exe"

# Compile Word Scramble (standalone)
g++ "Word Scramble.cpp" -o "Word Scramble.exe"

# Compile Sequence Game (standalone)
g++ "Sequence my.cpp" -o "Sequence my.exe"
```

## 📖 Usage

### **Running the Game Hub**
1. Compile and run `Game HUB.cpp` from the Final project folder
2. Enjoy the animated introduction screen
3. Press any key to continue to the main menu
4. Use arrow keys to navigate between games
5. Press Enter to select a game
6. Follow on-screen instructions for each game

### **Game Controls**
- **Menu Navigation**: Arrow keys (↑/↓) + Enter
- **Text Input**: Standard keyboard input
- **Game Exit**: Follow in-game quit options
- **Score Viewing**: Available in each game's menu

## 📁 Project Structure

```
CPP Games & Project/
├── Final project/
│   ├── GAME HUB/              # Early version of game hub
│   │   ├── Game HUB.cpp
│   │   ├── Game HUB.exe
│   │   └── Score.txt
│   ├── Game hub Final/        # Latest game hub version
│   │   ├── Game HUB.cpp       # Main game hub (recommended)
│   │   ├── Game HUB.exe
│   │   ├── Score.txt          # Word scramble scores
│   │   └── Score1.txt         # Sequence game scores
│   ├── Game Hub00.cpp         # Alternative game hub version
│   ├── Rock paper.cpp         # Rock Paper Scissors game
│   ├── Sequence my.cpp        # Standalone sequence game
│   ├── Word Scramble.cpp      # Standalone word scramble
│   └── game_history.txt       # Rock paper scissors history
├── Games/                     # Individual game collection
│   ├── Game of Minus.cpp      # Math subtraction game
│   ├── Jumper Table.cpp       # Multiplication table game
│   ├── Roll Dice.cpp          # Dice rolling game
│   ├── Sir Waqar's Demo code.cpp  # Demo/example code
│   └── Typing Game(ALI TAHIR).cpp # Typing challenge game
└── README.md                  # This file
```

## 🔧 Technical Details

### **Programming Concepts Demonstrated**
- **Classes and Objects**: WordScramble, Sequence classes with encapsulation
- **File I/O**: Score persistence using `<fstream>`
- **Time Management**: Performance tracking using `<ctime>`
- **Random Generation**: `srand()` and `rand()` for game randomness
- **String Manipulation**: Word scrambling algorithms
- **Sorting Algorithms**: Bubble sort implementation
- **Menu Systems**: Interactive console navigation
- **Memory Management**: Dynamic array handling

### **Libraries Used**
- `<iostream>` - Input/output operations
- `<fstream>` - File handling
- `<ctime>` - Time tracking and random seeding
- `<cstdlib>` - Random number generation
- `<string>` - String operations
- `<conio.h>` - Console input (Windows-specific)
- `<windows.h>` - Windows-specific functions
- `<iomanip>` - Output formatting

### **Key Algorithms**
- **Fisher-Yates Shuffle**: For word scrambling
- **Bubble Sort**: For sequence sorting
- **Linear Search**: For menu navigation
- **Random Selection**: For game content generation

## 🎓 Learning Outcomes

This project demonstrates proficiency in:
- **Object-Oriented Programming**: Clean class design and implementation
- **File Management**: Reading/writing game data to persistent storage
- **User Interface Design**: Creating engaging console interfaces
- **Algorithm Implementation**: Sorting, shuffling, and search algorithms
- **Error Handling**: Robust file I/O and input validation
- **Code Organization**: Modular programming with multiple source files
- **Documentation**: Comprehensive code commenting and README creation

## 👥 Contributors

- **Ali Tahir**: Primary developer and project creator
- Course: C++ Programming (1st Semester)
- Institution: NTU (Nanyang Technological University)

## 📄 License

This project is created for educational purposes as part of a C++ programming course. Feel free to use and modify for learning purposes.

---

**Note**: This collection represents a comprehensive C++ learning project showcasing various programming concepts from basic I/O operations to advanced object-oriented design patterns. Each game is fully functional and demonstrates different aspects of C++ programming.