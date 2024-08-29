#include <iostream>
#include <conio.h>
#include <windows.h>
#include <stdlib.h>
using namespace std;

struct student
{

  char name[20], roll[20];

  int Marks, random;
};

student st;

void cppp()
{
int i = 0, arr[6];
st.Marks = 0;
char choice;
while (i < 5)
  {
   back:
    st.random = rand() % 6;
    for (int j = 0; j <= 6; j++)
    {
     if (st.random == arr[j])
      {
        goto back;
      }
    }
  arr[i] = st.random;
  switch (st.random)
  {
    case 0:
    cout << i + 1 << ".What is a correct syntax to output \"Hello World\" in c++." << endl;
    cout << "  A. system.out.println(\"Hello World\");" << endl;
    cout << "  B. console.writeline(\"Hello World\");" << endl;
    cout << "  C. pront(\"Hello World\");" << endl;
    cout << "  D. cout (\"Hello world\");" << endl;

    choice = getch();
    if (choice == 'D' || choice == 'd')
      {
       cout << choice << " is correct." << endl;
       st.Marks++;
      }
    else
      {
       cout << choice << " is incorrect answer." << endl;
       cout << "The correct answer is D" << endl;
      }
    break;
    case 1:
      cout << i + 1 << ".Which of the folloeing is called address operator?" << endl;
      cout << "  A. *" << endl;
      cout << "  B. &" << endl;
      cout << "  C. _" << endl;
      cout << "  D. %" << endl;
      choice = getch();
      if (choice == 'B' || choice == 'b')
      {
        cout << choice << " is correct. " << endl;
        st.Marks++;
      }
      else
      {
        cout << choice << " is incorrect answer" << endl;
        cout << "The correct answer is B" << endl;
      }
      break;
    case 2:
      cout << i + 1 << ".Which of the following is used for comments in C++ ?" << endl;
      cout << "  A. //comment" << endl;
      cout << "  B. /*comment*/" << endl;
      cout << "  C. both//comment or /*comment*/" << endl;
      cout << "  D. //comment*/" << endl;
      choice = getch();
      if (choice == 'C' || choice == 'c')
      {
        cout << choice << " is correct. " << endl;
        st.Marks++;
      }
      else
      {
        cout << choice << " is incorrect answer" << endl;
        cout << "The corect answwer is C" << endl;
      }
      break;
    case 3:
      cout << i + 1 << ".Who created C++?" << endl;
      cout << "  A. Bjarne Stroustrup" << endl;
      cout << "  B. Dennis Ritchie" << endl;
      cout << "  C. Ken Thompson" << endl;
      cout << "  D. Brian Kernighan" << endl;
      choice = getch();
      if (choice == 'A' || choice == 'a')
      {
        cout << choice << " is correct. " << endl;
        st.Marks++;
      }
      else
      {
        cout << choice << " is incorrect answer" << endl;
        cout << "The correct answer is A" << endl;
      }
      break;
    case 4:
      cout << i + 1 << ".A language which has the capability to generate new data types are called" << endl;
      cout << "  A. Extensible" << endl;
      cout << "  B. Overloaded" << endl;
      cout << "  C. Encapsulated" << endl;
      cout << "  D. Reprehensible" << endl;
      choice = getch();
      if (choice == 'A' || choice == 'a')
      {
        cout << choice << " is correct. " << endl;
        st.Marks++;
      }
      else
      {
        cout << choice << " is incorrect answer" << endl;
        cout << "The correct answer is A" << endl;
      }
      break;
    case 5:
      cout << i + 1 << ".Which of the following is called inseertion/put to opeerator?" << endl;
      cout << "  A. <" << endl;
      cout << "  B. >" << endl;
      cout << "  C. <<" << endl;
      cout << "  D. >>" << endl;
      choice = getch();
      if (choice == 'C' || choice == 'c')
      {
        cout << choice << " is correct. " << endl;
        st.Marks++;
      }
      else
      {
        cout << choice << " is incorrect answer" << endl;
        cout << "The correct answer is C" << endl;
      }
      break;
    case 6:
      cout << i + 1 << ".Which of the following is called extraction/get from operator?" << endl;
      cout << "  A. <" << endl;
      cout << "  B. >" << endl;
      cout << "  C. <<" << endl;
      cout << "  D. >>" << endl;
      choice = getch();
      if (choice == 'D' || choice == 'd')
      {
        cout << choice << " is correct. " << endl;
        st.Marks++;
      }
      else
      {
        cout << choice << " is incorrect answer" << endl;
        cout << "The correct answer is D" << endl;
      }
    }
    i++;
  }
}
void java()
{
int i = 0, arr[6];
st.Marks = 0;
char choice;
while (i < 5)
  {
   back:
    st.random = rand() % 6;
    for (int j = 0; j <= 6; j++)
    {
     if (st.random == arr[j])
      {
        goto back;
      }
    }
  arr[i] = st.random;
  switch (st.random)
  {
    case 0:
    cout << i + 1 << ".Number of primitive data types in Java are?" << endl;
    cout << "  A. 6 " << endl;
    cout << "  B. 7 " << endl;
    cout << "  C. 8 " << endl;
    cout << "  D. 9 " << endl;

    choice = getch();
    if (choice == 'C' || choice == 'c')
      {
       cout << choice << " is correct." << endl;
       st.Marks++;
      }
    else
      {
       cout << choice << " is incorrect answer." << endl;
       cout << "The correct answer is C" << endl;
      }
    break;
    case 1:
      cout << i + 1 << ".What is the Size of float and double in Java?" << endl;
      cout << "  A. 32 and 64 " << endl;
      cout << "  B. 32 and 32 " << endl;
      cout << "  C. 64 and 64 " << endl;
      cout << "  D. 64 and 32 " << endl;
      choice = getch();
      if (choice == 'A' || choice == 'a')
      {
        cout << choice << " is correct. " << endl;
        st.Marks++;
      }
      else
      {
        cout << choice << " is incorrect answer" << endl;
        cout << "The correct answer is A" << endl;
      }
      break;
    case 2:
      cout << i + 1 << ".Automatic type conversion is possible in which of the possible cases?" << endl;
      cout << "  A. Byte to int " << endl;
      cout << "  B. Int to long " << endl;
      cout << "  C. Long to int " << endl;
      cout << "  D. Short to int " << endl;
      choice = getch();
      if (choice == 'B' || choice == 'b')
      {
        cout << choice << " is correct. " << endl;
        st.Marks++;
      }
      else
      {
        cout << choice << " is incorrect answer" << endl;
        cout << "The corect answwer is B" << endl;
      }
      break;
    case 3:
      cout << i + 1 << ".Select the valid statement." << endl;
      cout << "  A. char[]ch = new char(5) " << endl;
      cout << "  B. char[]ch = new char[5] " << endl;
      cout << "  C. char[]ch = new char() " << endl;
      cout << "  D. char[]ch = new char[] " << endl;
      choice = getch();
      if (choice == 'B' || choice == 'b')
      {
        cout << choice << " is correct. " << endl;
        st.Marks++;
      }
      else
      {
        cout << choice << " is incorrect answer" << endl;
        cout << "The correct answer is B" << endl;
      }
      break;
    case 4:
      cout << i + 1 << ".Select the valid statement to declare and initialize an array." << endl;
      cout << "  A. int[]A = {} " << endl;
      cout << "  B. int[]A = {1,2,3} " << endl;
      cout << "  C. int[]A = (1,2,3) " << endl;
      cout << "  D. int[][]A = {1,2,3} " << endl;
      choice = getch();
      if (choice == 'B' || choice == 'b')
      {
        cout << choice << " is correct. " << endl;
        st.Marks++;
      }
      else
      {
        cout << choice << " is incorrect answer" << endl;
        cout << "The correct answer is B" << endl;
      }
      break;
    case 5:
      cout << i + 1 << ".Identify the corrected definition of package." << endl;
      cout << "  A. A package is a collection of editing tools." << endl;
      cout << "  B. A package is a collection of classes." << endl;
      cout << "  C. A package is a collection of classes and interfaces." << endl;
      cout << "  D. A package is a collection of interfaces. " << endl;
      choice = getch();
      if (choice == 'C' || choice == 'c')
      {
        cout << choice << " is correct. " << endl;
        st.Marks++;
      }
      else
      {
        cout << choice << " is incorrect answer" << endl;
        cout << "The correct answer is C" << endl;
      }
      break;
    case 6:
      cout << i + 1 << ".To which of the following does the class string belong to." << endl;
      cout << "  A. java.lang " << endl;
      cout << "  B. java.awt " << endl;
      cout << "  C. java.applet " << endl;
      cout << "  D. java.string " << endl;
      choice = getch();
      if (choice == 'A' || choice == 'a')
      {
        cout << choice << " is correct. " << endl;
        st.Marks++;
      }
      else
      {
        cout << choice << " is incorrect answer" << endl;
        cout << "The correct answer is A" << endl;
      }
    }
    i++;
  }
}
void html()
{
  int i = 0, arr[6];
st.Marks = 0;
char choice;
while (i < 5)
  {
   back:
    st.random = rand() % 6;
    for (int j = 0; j <= 6; j++)
    {
     if (st.random == arr[j])
      {
        goto back;
      }
    }
  arr[i] = st.random;
  switch (st.random)
  {
    case 0:
    cout << i + 1 << ".What does the abbreviation HTML stand for?" << endl;
    cout << "  A. HyperText Markup Language. " << endl; 
    cout << "  B. HighText Markup LAnguage. " << endl;
    cout << "  C. HyperText Markdown Language. " << endl;
    cout << "  D. None of the above. " << endl;

    choice = getch();
    if (choice == 'A' || choice == 'a')
      {
       cout << choice << " is correct." << endl;
       st.Marks++;
      }
    else
      {
       cout << choice << " is incorrect answer." << endl;
       cout << "The correct answer is A" << endl;
      }
    break;
    case 1:
      cout << i + 1 << ".How many sizes of headers are available in HTML by default?" << endl;
      cout << "  A. 5" << endl;
      cout << "  B. 1" << endl;
      cout << "  C. 3" << endl;
      cout << "  D. 6" << endl;
      choice = getch();
      if (choice == 'D' || choice == 'd')
      {
        cout << choice << " is correct. " << endl;
        st.Marks++;
      }
      else
      {
        cout << choice << " is incorrect answer" << endl;
        cout << "The correct answer is D" << endl;
      }
      break;
    case 2:
      cout << i + 1 << ".What are the types of lists available in HTML?" << endl;
      cout << "  A. Ordered ,Unordered Lists. " << endl;
      cout << "  B. Bulleted , Numbered Lists. " << endl;
      cout << "  C. Named , Unnamed Lists. " << endl;
      cout << "  D. None of the above" << endl;
      choice = getch();
      if (choice == 'A' || choice == 'a')
      {
        cout << choice << " is correct. " << endl;
        st.Marks++;
      }
      else
      {
        cout << choice << " is incorrect answer" << endl;
        cout << "The corect answwer is A" << endl;
      }
      break;
    case 3:
      cout << i + 1 << ".We enclose HTML tags within?" << endl;
      cout << "  A. {}" << endl;
      cout << "  B. <>" << endl;
      cout << "  C. !! " << endl;
      cout << "  D. None of the above" << endl;
      choice = getch();
      if (choice == 'B' || choice == 'b')
      {
        cout << choice << " is correct. " << endl;
        st.Marks++;
      }
      else
      {
        cout << choice << " is incorrect answer" << endl;
        cout << "The correct answer is B" << endl;
      }
      break;
    case 4:
      cout << i + 1 << ".What are the attributes used to change the size of an image?" << endl;
      cout << "  A. Width and height " << endl;
      cout << "  B. Big and Small " << endl;
      cout << "  C. Top and bottom " << endl;
      cout << "  D. None of the above" << endl;
      choice = getch();
      if (choice == 'A' || choice == 'a')
      {
        cout << choice << " is correct. " << endl;
        st.Marks++;
      }
      else
      {
        cout << choice << " is incorrect answer" << endl;
        cout << "The correct answer is A" << endl;
      }
      break;
    case 5:
      cout << i + 1 <<".Which HTML element is used to define description data?" << endl;
      cout << "  A. <li> " << endl;
      cout << "  B. <ol> " << endl;
      cout << "  C. <dd> " << endl;
      cout << "  D. <dl>" << endl;
      choice = getch();
      if (choice == 'C' || choice == 'c')
      {
        cout << choice << " is correct. " << endl;
        st.Marks++;
      }
      else
      {
        cout << choice << " is incorrect answer" << endl;
        cout << "The correct answer is C" << endl;
      }
      break;
    case 6:
      cout << i + 1 << ".Which of the following properties is used to change the font of text?" << endl;
      cout << "  A. front-family " << endl;
      cout << "  B. front-size " << endl;
      cout << "  C. text-align " << endl;
      cout << "  D. None of the above " << endl;
      choice = getch();
      if (choice == 'A' || choice == 'a')
      {
        cout << choice << " is correct. " << endl;
        st.Marks++;
      }
      else
      {
        cout << choice << " is incorrect answer" << endl;
        cout << "The correct answer is A" << endl;
      }
    }
    i++;
  }
}
void result()
{
  int percentage = 0;
  cout << "Student name: " << st.name << endl;
  cout << "Student roll no. :" << st.roll << endl;
  cout << "Marks : " << st.Marks << "out of 6" << endl;
  percentage = 100 * st.Marks / 6;
  cout << "percenatge : " << percentage << "%" << endl;
  if (percentage >= 50)
  {
    cout << "status pass : " << endl;
  }
  else
  {
    cout << "status fail : " << endl;
  }
}

int main()
{
  char press, select;
  do
  {
    cout << "\n\n\t\t*************************" << endl;
    cout << "\t\t       QUIZ SYATEM" << endl;
    cout << "\t\t**************************" << endl;
    cout << "\t\tEnter name : ";
    gets(st.name);
    cout << "\t\tRoll no. : ";
    gets(st.roll);
    system("CLS");
    cout << "\t\tMarks less than 50% will be fail" << endl
         << endl;
    cout << "\n\nSelect option which subject's quiz you want to perform " << endl;
    cout << " 1. c++" << endl;
    cout << " 2. java" << endl;
    cout << " 3. html" << endl;
    select = getch();
    system("CLS");
    switch (select)
    {
    case '1':
      cout << "\t\tC++ Quiz" << endl;
      cppp();
      system("CLS");
      cout << "\t\tC++ quiz result " << endl;
      result();
      break;
    case '2':
      cout << "\t\tJava Quiz" << endl;
      java();
      break;
    case '3':
      cout << "\t\thtml Quiz" << endl;
      html();
      break;
    default:
      cout << "Invalid input" << endl;
      break;
    }
    cout << "press y to continue or any key to terminate" << endl;
    press = getch();
    system("CLS");
  } while (press == 'y' || press == 'Y');
}