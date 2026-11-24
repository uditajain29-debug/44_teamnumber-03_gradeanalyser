# 🎓 Student Grade Analyzer

A simple and efficient **Student Grade Analyzer** developed as a **Mini Hackathon Project**.  
The program takes students' marks as input, calculates their academic performance, assigns grades, and provides useful class-level statistics.

## 📌 About the Project

Manually calculating grades, percentages, pass/fail status, and class statistics can be repetitive and time-consuming.

The **Student Grade Analyzer** automates these calculations and provides a quick overview of both **individual student performance** and **overall class performance**.

## ✨ Features

- 👤 Store student names and marks
- 📝 Accept marks for multiple subjects
- ➕ Calculate total marks
- 📊 Calculate percentage
- 🏆 Assign grades based on performance
- ✅ Determine Pass/Fail status
- 🥇 Identify the class topper
- 📈 Calculate class average
- 🎯 Calculate overall pass percentage
- 📋 Display student-wise results

## 🛠️ Technologies Used

- **Language:** C
- **Concepts Used:**
  - Structures
  - Arrays
  - Loops
  - Conditional Statements
  - Functions
  - Basic Data Processing

## ⚙️ How It Works

1. Enter the number of students.
2. Enter each student's name.
3. Enter marks obtained in each subject.
4. The program calculates:
   - Total Marks
   - Percentage
   - Grade
   - Pass/Fail Status
5. After processing all students, it displays class statistics such as:
   - Class Topper
   - Class Average
   - Number of Students Passed
   - Overall Pass Percentage

## 📊 Grade System

| Percentage | Grade |
|------------|-------|
| 90% and above | A+ |
| 80% – 89% | A |
| 70% – 79% | B |
| 60% – 69% | C |
| 50% – 59% | D |
| Below 50% | F |

> **Note:** The grading criteria can easily be modified according to the requirements of the institution.

## 💻 Example

```text
Enter number of students: 3

Enter name of student 1: Rahul
Enter marks in 5 subjects: 85 90 78 88 92

Total Marks: 433/500
Percentage: 86.60%
Grade: A
Status: PASS
```

## 📁 Project Structure

```text
Student-Grade-Analyzer/
│
├── student_grade_analyzer.c
└── README.md
```

## 🚀 How to Run

### 1. Clone the Repository

```bash
git clone https://github.com/uditajain29-debug/44_teamnumber-03_gradeanalyser
```

### 2. Open the Project

```bash
cd student-grade-analyzer
```

### 3. Compile

Using GCC:

```bash
gcc student_grade_analyzer.c -o grade_analyzer
```

### 4. Run

**Windows:**

```bash
grade_analyzer.exe
```

**Linux/macOS:**

```bash
./grade_analyzer
```

## 🔮 Future Improvements

The project can be extended with:

- 💾 File handling for permanent student records
- 🔍 Search student by name or roll number
- 📊 Subject-wise performance analysis
- 🏅 Student ranking system
- 📉 Highest and lowest marks for each subject
- 🖥️ Graphical User Interface (GUI)
- 🌐 Web-based version
- 📄 Automatic report card generation

## 👥 Team Members

| Role | Name |
|------|------|
| Developer | Udita Jain |
| Co-Developer/Presentator | Shreashth Atharv|
| Co-Developer | Himanshu Chourasia |

## 🎯 Hackathon Objective

The objective of this project is to demonstrate how fundamental **C programming concepts** can be combined to solve a practical academic problem.

The project focuses on **automation, structured data management, calculations, and performance analysis** while keeping the program simple and easy to use.

## 📜 License

This project was created for **educational and mini-hackathon purposes**.

---

### ⭐ Student Grade Analyzer

**Making student performance analysis simple, fast, and organized.**
