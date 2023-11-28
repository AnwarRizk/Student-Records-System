# Student Database Management System in C

This is a simple console application written in C language. It's a student database management system that allows you to perform the following operations:

1. **Add Student to DB**: This option allows you to add a new student to the database. You will be asked to enter the student's ID, first name, last name, date of birth, gender, and scores in Math1, Math2, Intro to CS, Intro to IS, and Intro to PL.
   <br>

2. **Search for Student**: This option allows you to search for a student in the database using the student's ID. If the student is found, the student's details will be displayed.
   <br>

3. **Print**: This option prints the details of all the students in the database.
   <br>

4. **Statistics**: This option displays the total number of students in the database and the average scores in Math1, Math2, Intro to CS, Intro to IS, and Intro to PL.
   <br>

The program will keep running until you choose to exit by entering 0.

## Code Structure

The program uses a struct `StudentData` to store the details of a student. An array of `StudentData` is used to store the details of all the students.

The `main` function contains a `do-while` loop that keeps running until the user chooses to exit. Inside the loop, a `switch` statement is used to perform the operation chosen by the user.

## Prerequisites

- A C/C++ compiler installed on your computer

## How to Run

1. Clone the repository to your computer.

2. Open the terminal/command prompt and navigate to the directory where you cloned the repository.

3. Run the following command to compile the program:

   ```bash
   gcc main.c -o main
   ```

4. Run the following command to run the program:

   ```bash
    ./main
   ```
