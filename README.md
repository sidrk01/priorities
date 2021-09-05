# Priorities
 
  Authors: [Joseph Monge](https://github.com/jlmonge)
 [Sidharth Ramkumar](https://github.com/sidrk01)
 [Alexander Silva](https://github.com/asilv067)
 [Cheyenne Ayyoub](https://github.com/cheyenneayyoub)
 
## Project Description
 For our project we will be designing and implementing a task scheduler that keeps track of week-to-week activities. The complexity of each task and sub-task will be categorized  depending on how important or necessary the tasks are to the user. This project will demonstrate the intricacies of a week-to-week schedule and how involved planing simple events and meetings can become. 

  * [C++](https://www.cplusplus.com/)- To implement our project we will be using C++ as the programming language. 
  * [Git/Github](https://github.com/) - We will be using the git version control system to monitor our progress and workflow.
  * [Valgrind](https://valgrind.org/)- We will use Valgrind to identify memory issues and leaks. 

## UI Elements
 inputs -  title, description, type of event, the priority it gets, duration, and due date. 
 outputs - menu that displays the events according to a specific category.

## Design Patterns
We will be using the Composite design pattern in order to address the issue on how tasks are going to be categorized. It will also address the complexity of each task and sub-task. Since the tasks the user may implement in the scheduler can vary in type, we can allow the user to create their task and then modify that to fit in with their predefined categories. Using the composite design pattern, the user can create a rudimentary object of type Task that goes under the category the user defines it under.

We'll also be using the Strategy design pattern to allow the user to output tasks in certain categories. For example, users will be able to filter tasks by the type of task or when the task is due. Without implementing this design pattern, we would have to include functions in each class to provide various types of output, which is more tedious to implement than using the Strategy design pattern. With this design pattern, we can easily extract only the information we want from each task and easily include various search and filter algorithms rather than keeping redundant or hard to implement code.

 ## Screenshots
  Screenshots of the input/output after running your application
  ![Screen Shot 2021-06-01 at 1 56 37 PM](https://user-images.githubusercontent.com/79485389/120390087-23907800-c2e2-11eb-93b5-7f2e3062e49c.png)
![Screen Shot 2021-06-01 at 1 57 01 PM](https://user-images.githubusercontent.com/79485389/120390100-268b6880-c2e2-11eb-8210-f1b7707c1267.png)
![Screen Shot 2021-06-01 at 1 57 42 PM](https://user-images.githubusercontent.com/79485389/120390106-29865900-c2e2-11eb-9fa7-bca712409998.png)
![Screen Shot 2021-06-01 at 1 58 26 PM](https://user-images.githubusercontent.com/79485389/120390111-2b501c80-c2e2-11eb-9d84-e861cc83dcbb.png)
![Screen Shot 2021-06-01 at 1 58 44 PM](https://user-images.githubusercontent.com/79485389/120390131-3145fd80-c2e2-11eb-89dd-9869ee1ee8ee.png)

 ## Installation/Usage
  Instructions on installing and running your application
  * First, clone the repository using git clone --recursive https://github.com/cs100/final-project-asilv067_cayyo001_jmong006_sramk002.git
  * From here, enter the folder using cd final-project-asilv067_cayyo001_jmong006_sramk002.
  * Once inside, run cmake3 . then make then ./main
  * Afterwards the client will be presented with a menu. Enter the number and press enter on the keyboard.
  * If the user inputs 1 then they will be presented with a series of questions that they must answer. Simply follow the directions
  * If the user inputs 2 then they will be asked for the task's ID and they must input a 7 letter string that consists of "y" or "n" only. This string indicates what days the task will be on; "y" means yes for that day and "n" means no for that day. The user must also input the title of their task.
  * If the user inputs 3, they will have to input the task's ID that they want to mark as complete.
  * If the user inputs 4, they will have to input the task's ID that they want to delete.
  * If the user inputs 5, they will be asked what category to sort by and the user must input a number.
  * If the user inputs 6, they will be asked what category to sory by and the user must input a number.
  * If the user inputs 7, it will automatically sort randomly.
  * If the user inputs 8, they will exit the program.
 ## Testing
To test each function within our program, we used simple unit tests to mimic the input provided by the client class to the function. This allowed us to verify the functionality for individual parts of the program. 
 
