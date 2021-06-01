 > As you complete each section you **must** remove the prompt text. Every *turnin* of this project includes points for formatting of this README so keep it clean and keep it up to date. 
 > Prompt text is any lines beginning with "\>"
 > Replace anything between \<...\> with your project specifics and remove angle brackets. For example, you need to name your project and replace the header right below this line with that title (no angle brackets). 
# Priorities
 > Your author list below should include links to all members GitHub (remove existing author).
 
  Authors: [Joseph Monge](https://github.com/jlmonge)
 [Sidharth Ramkumar](https://github.com/sidrk01)
 [Alexander Silva](https://github.com/asilv067)
 [Cheyenne Ayyoub](https://github.com/cheyenneayyoub)
 
 > You will be forming a group of **THREE** students and working on an interesting project. A list of proposed project ideas that have been successful in previous quarters is given in the project specifications link on iLearn. You can select an idea from the list, start thinking about the features you will implement, what design patterns can help you implement them, and why. If you want to propose your own original idea, you will have to contact an instructor to discuss the project and obtain written permission before you submit your project proposal. Your project needs to implement two design patterns.The project work should be divided almost equally among team members and each member is expected to work on at least one design pattern (more than one partner may work on a pattern) and some of its test cases. You can of course help each other, but it needs to be clear who will be responsible for which patterns and for which features.
 
 > ## Expectations
 > * Incorporate **at least two** distinct design patterns. You need to include at least *one* design pattern that we will teach this session:
 >   * Composite, Strategy, Abstract Factory, Visitor, or Decorator
 > * All design patterns need to be linked together (it can't be two distinct projects)
 > * Your project should be implemented in C++. If you wish to choose anoher programming language (e.g. Java, Python), please discuss with your lab TA to obtain permission.
 > * You can incorporate additional technologies/tools but they must be approved (in writing) by the instructor or the TA.
 > * Each member of the group **must** be committing code regularly and make sure their code is correctly attributed to them. We will be checking attributions to determine if there was equal contribution to the project.
> * All project phases are to be submitted to this GitHub repository. You should modify this README file to reflect the different phases of the project. In addition, you should regularly hold sprint meetings with your group.

## Project Description
 For our project we will be designing and implementing a task scheduler that keeps track of week-to-week activities. The complexity of each task and sub-task will be categorized  depending on how important or necessary the tasks are to the user. This project will demonstrate the intricacies of a week-to-week schedule and how involved planing simple events and meetings can become. 

* [C++](https://www.cplusplus.com/)- To implement our project we will be using C++ as the programming language. 
*  * [Git/Github](https://github.com/) - We will be using the git version control system to monitor our progress and workflow.
   * [Valgrind](https://valgrind.org/)- We will use Valgrind to identify memory issues and leaks. 

  * inputs -  title, description, type of event, the priority it gets, duration, and due date. 
  * outputs - menu that displays the events according to a specific category.

We will be using the Composite design pattern in order to address the issue on how tasks are going to be categorized. It will also address the complexity of each task and sub-task. Since the tasks the user may implement in the scheduler can vary in type, we can allow the user to create their task and then modify that to fit in with their predefined categories. Using the composite design pattern, the user can create a rudimentary object of type Task that goes under the category the user defines it under.

We'll also be using the Strategy design pattern to allow the user to output tasks in certain categories. For example, users will be able to filter tasks by the type of task or when the task is due. Without implementing this design pattern, we would have to include functions in each class to provide various types of output, which is more tedious to implement than using the Strategy design pattern. With this design pattern, we can easily extract only the information we want from each task and easily include various search and filter algorithms rather than keeping redundant or hard to implement code.

 > ## Phase II
 > In addition to completing the "Class Diagram" section below, you will need to 
 > * Set up your GitHub project board as a Kanban board for the project. It should have columns that map roughly to 
 >   * Backlog, TODO, In progress, In testing, Done
 >   * You can change these or add more if you'd like, but we should be able to identify at least these.
 > * There is no requirement for automation in the project board but feel free to explore those options.
 > * Create an "Epic" (note) for each feature and each design pattern and assign them to the appropriate team member. Place these in the `Backlog` column
 > * Complete your first *sprint planning* meeting to plan out the next 7 days of work.
 >   * Create smaller development tasks as issues and assign them to team members. Place these in the `TODO` column.
 >   * These cards should represent roughly 7 days worth of development time for your team, taking you until your first meeting with the TA
## Class Diagram
 > Include a class diagram(s) for each design pattern and a description of the diagram(s). Your class diagram(s) should include all the main classes you plan for the project. This should be in sufficient detail that another group could pick up the project this point and successfully complete it. Use proper OMT notation (as discussed in the course slides). You may combine multiple design patterns into one diagram if you'd like, but it needs to be clear which portion of the diagram represents which design pattern (either in the diagram or in the description). 

 [_priorities_ class diagram.pdf](https://github.com/cs100/final-project-asilv067_cayyo001_jmong006_sramk002/files/6518017/_priorities_.class.diagram.pdf)

 > ## Phase III
 > You will need to schedule a check-in with the TA (during lab hours or office hours). Your entire team must be present. 
 > * Before the meeting you should perform a sprint plan like you did in Phase II
 > * In the meeting with your TA you will discuss: 
 >   - How effective your last sprint was (each member should talk about what they did)
 >   - Any tasks that did not get completed last sprint, and how you took them into consideration for this sprint
 >   - Any bugs you've identified and created issues for during the sprint. Do you plan on fixing them in the next sprint or are they lower priority?
 >   - What tasks you are planning for this next sprint.

 > ## Final deliverable
 > All group members will give a demo to the TA during lab time. The TA will check the demo and the project GitHub repository and ask a few questions to all the team members. 
 > Before the demo, you should do the following:
 > * Complete the sections below (i.e. Screenshots, Installation/Usage, Testing)
 > * Plan one more sprint (that you will not necessarily complete before the end of the quarter). Your In-progress and In-testing columns should be empty (you are not doing more work currently) but your TODO column should have a full sprint plan in it as you have done before. This should include any known bugs (there should be some) or new features you would like to add. These should appear as issues/cards on your Kanban board. 
 
 ## Screenshots
 > Screenshots of the input/output after running your application
 ## Installation/Usage
 > Instructions on installing and running your application
 > * First, clone the repository using git clone --recursive https://github.com/cs100/final-project-asilv067_cayyo001_jmong006_sramk002.git
 > * From here, enter the folder using cd final-project-asilv067_cayyo001_jmong006_sramk002.
 > * Once inside, run cmake3 . then make then ./main
 > * Afterwards the client will be presented with a menu. Enter the number and press enter on the keyboard.
 > * If the user inputs 1 then they will be presented with a series of questions that they must answer. Simply follow the directions
 > * If the user inputs 2 then they will be asked for the task's ID and they must input a 7 letter string that consists of "y" or "n" only. This string indicates what days the task will be on; "y" means yes for that day and "n" means no for that day. The user must also input the title of their task.
 > * If the user inputs 3, they will have to input the task's ID that they want to mark as complete.
 > * If the user inputs 4, they will have to input the task's ID that they want to delete.
 > * If the user inputs 5, they will be asked what category to sort by and the user must input a number.
 > * If the user inputs 6, they will be asked what category to sory by and the user must input a number.
 > * If the user inputs 7, it will automatically sort randomly.
 > * If the user inputs 8, they will exit the program.
 ## Testing
 > How was your project tested/validated? If you used CI, you should have a "build passing" badge in this README.
 
 
